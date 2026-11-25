# RV_D5SK2_L4 – Lab to Code Complete ALU

**Day 5 · Complete Pipelined RISC-V CPU Micro-architecture**  
**Sub-kit D5SK2: Solutions to Pipeline Hazards**

## Overview

Implements every RV32I ALU operation.

## Key Points

- Includes SLT/SLTU, SRA/SRAI with sign extension, LUI/AUIPC, JAL/JALR (PC + 4).

## Code / Commands

```tlv
$sltu_rslt  = $src1_value < $src2_value;
$sltiu_rslt = $src1_value < $imm;
$result[31:0] =
   $is_andi ? $src1_value & $imm :
   $is_ori  ? $src1_value | $imm :
   $is_xori ? $src1_value ^ $imm :
   $is_addi || $is_load || $is_s_instr ? $src1_value + $imm :
   $is_slli ? $src1_value << $imm[5:0] :
   $is_srli ? $src1_value >> $imm[5:0] :
   $is_add  ? $src1_value + $src2_value :
   $is_sub  ? $src1_value - $src2_value :
   $is_lui  ? {$imm[31:12], 12'b0} :
   $is_auipc ? $pc + $imm :
   $is_jal || $is_jalr ? $pc + 32'd4 :
   // ... remaining ops
   32'bx;
```

## Screenshots

<!-- Save your screenshot as day5/images/lec58_screenshot.png and remove the comment markers: -->
<!-- ![Lab to Code Complete ALU](images/lec58_screenshot.png) -->

## My Observations

- _Add what you observed when doing this lecture/lab._

---

[⬅ Back to index](../README.md)
