# RV_D2SK2_L2 – Review ASM Function Calls

**Day 2 · Introduction to ABI and Basic Verification Flow**  
**Sub-kit D2SK2: Labwork Using ABI Function Calls**

## Overview

Writes the C caller and the assembly callee.

## Key Points

- `.global load` exposes the label to the linker.
- `ret` returns to the address in `ra`.

## Code / Commands

```asm
.section .text
.global load
.type load, @function
load:
    add  a4, a0, zero   # a4 = count limit
    add  a2, a0, a1     # a2 = running sum
    add  a3, a1, zero   # a3 = loop counter
loop:
    add  a4, a3, a4
    addi a3, a3, 1
    blt  a3, a2, loop
    add  a0, a4, zero   # return value
    ret
```

## Screenshots

<!-- Save your screenshot as day2/images/lec14_screenshot.png and remove the comment markers: -->
<!-- ![Review ASM Function Calls](images/lec14_screenshot.png) -->

## My Observations

- _Add what you observed when doing this lecture/lab._

---

[⬅ Back to index](../README.md)
