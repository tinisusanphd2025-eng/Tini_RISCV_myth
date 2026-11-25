# RV_D2SK2_L3 – Simulate New C Program with Function Call

**Day 2 · Introduction to ABI and Basic Verification Flow**  
**Sub-kit D2SK2: Labwork Using ABI Function Calls**

## Overview

Compiles the C + ASM pair together and runs it on Spike.

## Key Points

- Both source files are passed to gcc in one command.
- Output should match the pure-C version from Day 1.

## Code / Commands

```bash
riscv64-unknown-elf-gcc -Ofast -mabi=lp64 -march=rv64i -o 1to9_custom.o 1to9_custom.c load.S
spike pk 1to9_custom.o
riscv64-unknown-elf-objdump -d 1to9_custom.o | less
```

## Screenshots

<!-- Save your screenshot as day2/images/lec15_screenshot.png and remove the comment markers: -->
<!-- ![Simulate New C Program with Function Call](images/lec15_screenshot.png) -->

## My Observations

- _Add what you observed when doing this lecture/lab._

---

[⬅ Back to index](../README.md)
