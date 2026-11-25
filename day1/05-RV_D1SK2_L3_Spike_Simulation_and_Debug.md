# RV_D1SK2_L3 – Spike Simulation and Debug

**Day 1 · Introduction to RISC-V ISA and GNU Compiler Toolchain**  
**Sub-kit D1SK2: Labs Using RISC-V Toolchain**

## Overview

Runs the RISC-V binary on the Spike ISA simulator and steps through it in debug mode.

## Key Points

- `spike pk` runs the binary using the proxy kernel.
- `spike -d pk` enters interactive debug mode.
- `until pc 0 <addr>` runs to an address; `reg 0 sp` / `reg 0 a0` prints registers.
- Single-stepping with Enter shows each instruction's effect on registers.

## Code / Commands

```bash
spike pk sum1ton.o
spike -d pk sum1ton.o
: until pc 0 100b0
: reg 0 sp
```

## Screenshots

<!-- Save your screenshot as day1/images/lec05_screenshot.png and remove the comment markers: -->
<!-- ![Spike Simulation and Debug](images/lec05_screenshot.png) -->

## My Observations

- _Add what you observed when doing this lecture/lab._

---

[⬅ Back to index](../README.md)
