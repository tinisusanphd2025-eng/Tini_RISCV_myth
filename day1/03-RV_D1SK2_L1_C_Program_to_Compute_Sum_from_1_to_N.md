# RV_D1SK2_L1 – C Program to Compute Sum from 1 to N

**Day 1 · Introduction to RISC-V ISA and GNU Compiler Toolchain**  
**Sub-kit D1SK2: Labs Using RISC-V Toolchain**

## Overview

Writes and runs a simple C program natively with gcc before compiling it for RISC-V.

## Key Points

- Loop accumulates `sum += i` for i = 1..n.
- Compiled and run with the native gcc to confirm the expected output.

## Code / Commands

```c
#include <stdio.h>

int main() {
    int i, sum = 0, n = 100;
    for (i = 1; i <= n; ++i)
        sum += i;
    printf("Sum of numbers from 1 to %d is %d\n", n, sum);
    return 0;
}
```

## Screenshots

<!-- Save your screenshot as day1/images/lec03_screenshot.png and remove the comment markers: -->
<!-- ![C Program to Compute Sum from 1 to N](images/lec03_screenshot.png) -->

## My Observations

- _Add what you observed when doing this lecture/lab._

---

[⬅ Back to index](../README.md)
