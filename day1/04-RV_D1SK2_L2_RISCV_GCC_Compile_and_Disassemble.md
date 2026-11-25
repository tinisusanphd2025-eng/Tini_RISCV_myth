# RV_D1SK2_L2 – RISC-V GCC Compile and Disassemble

**Day 1 · Introduction to RISC-V ISA and GNU Compiler Toolchain**  
**Sub-kit D1SK2: Labs Using RISC-V Toolchain**

## Overview

Compiles the same program with the RISC-V GCC cross-compiler and inspects the assembly.

## Key Points

- `-mabi=lp64 -march=rv64i` target the 64-bit base integer ISA.
- `-O1` vs `-Ofast` changes the number of instructions generated for `main`.
- Instruction count = (end address − start address of `main`) / 4 bytes.
- `objdump -d` shows the disassembly; pipe to `less` and search `/main`.

## Code / Commands

```bash
riscv64-unknown-elf-gcc -O1 -mabi=lp64 -march=rv64i -o sum1ton.o sum1ton.c
riscv64-unknown-elf-objdump -d sum1ton.o | less

# compare with
riscv64-unknown-elf-gcc -Ofast -mabi=lp64 -march=rv64i -o sum1ton.o sum1ton.c
```

## Screenshots

<!-- Save your screenshot as day1/images/lec04_screenshot.png and remove the comment markers: -->
<!-- ![RISC-V GCC Compile and Disassemble](images/lec04_screenshot.png) -->

## My Observations

- _Add what you observed when doing this lecture/lab._

---

[⬅ Back to index](../README.md)
