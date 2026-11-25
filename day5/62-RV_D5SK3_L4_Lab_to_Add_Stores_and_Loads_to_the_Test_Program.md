# RV_D5SK3_L4 – Lab to Add Stores and Loads to the Test Program

**Day 5 · Complete Pipelined RISC-V CPU Micro-architecture**  
**Sub-kit D5SK3: Load/Store Instructions and Completing the RISC-V CPU**

## Overview

Extends the test program to store the sum and load it back into `x17`.

## Key Points

- Pass condition now checks `x17` instead of `x10`.

## Code / Commands

```asm
m4_asm(SW, r0, r10, 10000)   // store sum at address 16
m4_asm(LW, r17, r0, 10000)   // load it back into x17
```

## Screenshots

<!-- Save your screenshot as day5/images/lec62_screenshot.png and remove the comment markers: -->
<!-- ![Lab to Add Stores and Loads to the Test Program](images/lec62_screenshot.png) -->

## My Observations

- _Add what you observed when doing this lecture/lab._

---

[⬅ Back to index](../README.md)
