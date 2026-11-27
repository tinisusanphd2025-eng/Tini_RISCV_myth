# Project: GEMM on the RVMYTH RISC-V CPU

Goal: run a matrix multiply (GEMM) written in C on the RVMYTH CPU built in the workshop, and compare a **non-pipelined** (3-cycle) and a **pipelined** version of the CPU: latency, branch misses and penalty cycles.

## Files

| File | What it is |
|---|---|
| [`gemm.c`](gemm.c) | 2×2 GEMM in bare-metal C (no libraries, shift-add multiply) |
| [`gemm.dump`](gemm.dump) | Disassembly of the compiled program (57 RV32I instructions) |
| [`to_m4asm.py`](to_m4asm.py) | Converts the disassembly into RVMYTH `m4_asm(...)` lines and simulates it |
| [`gemm_program.tlv`](gemm_program.tlv) | Generated test program to paste into the RVMYTH shell |

## Step 1 – Write GEMM in C for a bare RV32I CPU

C = A × B with 2×2 matrices. Design choices forced by RVMYTH:

| RVMYTH limit | Solution in `gemm.c` |
|---|---|
| RV32I has no `MUL` | `mul()` uses shift-and-add |
| Data memory is only 16 words | 2×2 matrices: A = words 0–3, B = 4–7, C = 8–11 |
| No OS, no `printf`, no loader | Matrices initialised with stores; result stays in memory |
| No stack set up | No function calls (`mul` is inlined) |
| Program must end | Final `while (1);` → `jal x0, 0` self-loop |

A = [1 2; 3 4], B = [5 6; 7 8] → expected **C = [19 22; 43 50]**.

## Step 2 – Compile to RISC-V assembly

```bash
clang --target=riscv32 -march=rv32i -mabi=ilp32 -O1 -nostdlib -ffreestanding -fno-pic \
      -fuse-ld=lld -Wl,-Ttext=0 -Wl,-e,_start gemm.c -o gemm.elf
llvm-objdump -d --no-show-raw-insn -M no-aliases gemm.elf | tail -n +7 > gemm.dump
```

With the workshop VM's GCC the equivalent is:

```bash
riscv64-unknown-elf-gcc -O1 -march=rv32i -mabi=ilp32 -nostdlib -ffreestanding \
      -Wl,-Ttext=0 -Wl,-e,_start gemm.c -o gemm.elf
riscv64-unknown-elf-objdump -d -M no-aliases gemm.elf
```

Check that the code uses only RV32I and has no `call` to library functions (e.g. `__mulsi3`). This program uses: ADDI, ADD, AND, SLLI, SRAI, LW, SW, BEQ, BNE, JAL.

## Step 3 – Convert to an RVMYTH test program

```bash
python3 to_m4asm.py gemm.dump > gemm_program.tlv
```

The script maps ABI register names to numbers (a0 → r10 …), writes immediates in binary, converts branch/jump targets to PC-relative offsets, and uses the operand order of the `m4_asm` macros:

| Type | Format |
|---|---|
| R | `m4_asm(ADD, rd, rs1, rs2)` |
| I / load | `m4_asm(ADDI, rd, rs1, imm12)`, `m4_asm(LW, rd, rs1, imm12)` |
| Shift | `m4_asm(SLLI, rd, rs1, shamt5)` |
| Store | `m4_asm(SW, rs1_base, rs2_data, imm12)` |
| Branch | `m4_asm(BNE, rs1, rs2, imm13)` |
| JAL | `m4_asm(JAL, rd, imm[20:1])` (20 bits) |

It also simulates the program (golden model): **C = [19, 22, 43, 50]** ✓.

## Step 4 – Run on RVMYTH

1. Finish the Day 5 CPU (complete ALU, loads/stores, jumps, hazards).
2. In the RVMYTH shell, replace the sum-1-to-9 `m4_asm` lines with the contents of `gemm_program.tlv`.
3. Make sure the data memory is enabled (`m4+dmem(@4)`).
4. Simulate and check DMem words 8–11 in the VIZ tab: 19, 22, 43, 50.

## Step 5 – Two CPU versions

| Version | Description |
|---|---|
| Non-pipelined | Day 5 "3-cycle" CPU: one instruction every 3 cycles (`$valid` = 1 every 3rd cycle), no hazards |
| Pipelined | Final Day 5 CPU: one instruction per cycle, register bypass, predict-not-taken with 2-cycle redirect for taken branches, jumps and loads |

## Step 6 – Measure with counters

Add to `|cpu` (use the stage where `$valid`, `$valid_taken_br`, `$valid_jump` and `$valid_load` are computed in your CPU):

```tlv
         // Program done when the final self-loop instruction (PC 0xe0) is reached
         $done = $valid && ($pc == 32'he0);
         $cycle_cnt[31:0]  = $reset ? 0 : >>1$done ? >>1$cycle_cnt : >>1$cycle_cnt + 1;
         $instr_cnt[31:0]  = $reset ? 0 : >>1$instr_cnt  + {31'b0, $valid && !$done};
         $br_miss_cnt[31:0]= $reset ? 0 : >>1$br_miss_cnt + {31'b0, $valid_taken_br};
         $jump_cnt[31:0]   = $reset ? 0 : >>1$jump_cnt   + {31'b0, $valid_jump};
         $load_cnt[31:0]   = $reset ? 0 : >>1$load_cnt   + {31'b0, $valid_load};
```

Branch miss: RVMYTH always fetches PC + 4 (predict not taken), so every **taken** branch is a miss and costs 2 invalidated cycles. Jumps and loads also redirect the PC with a 2-cycle bubble.

## Step 7 – Expected results (from the golden model)

Dynamic counts for the 2×2 GEMM:

| Count | Value |
|---|---|
| Instructions executed | 358 |
| Branches taken (misses) | 25 |
| Branches not taken | 23 |
| Jumps (JAL) | 15 |
| Loads / stores | 16 / 12 |

Estimated cycles (to compare with the Makerchip measurements):

| Metric | Non-pipelined (3-cycle) | Pipelined |
|---|---|---|
| Cycles | 358 × 3 = **1074** | 358 + 2×25 + 2×15 + 2×16 = **470** |
| CPI | 3.0 | 1.31 |
| Branch-miss penalty | – | 2 × 25 = 50 cycles |
| Jump + load penalty | – | 60 + 32 = 62 cycles |
| Speedup | 1× | **≈ 2.3×** |

The pipelined CPU does not reach 3× because 112 of its 470 cycles are bubbles from taken branches, jumps and loads.

## Step 8 – Report

Fill in the table with the counter values measured in Makerchip, compare with the estimates above, and discuss: effect of the branch penalty, effect of matrix size (N = 3 or 4 needs a larger DMem), and ideas such as branch prediction or loop unrolling (`-funroll-loops`) to reduce misses.
