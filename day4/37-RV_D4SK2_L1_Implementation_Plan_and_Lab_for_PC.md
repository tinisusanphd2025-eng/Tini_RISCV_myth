# RV_D4SK2_L1 – Implementation Plan and Lab for PC

**Day 4 · Basic RISC-V CPU Micro-architecture**  
**Sub-kit D4SK2: Fetch and Decode**

## Overview

The program counter selects the next instruction address.

## Key Points

- Increments by 4 each cycle (byte addressing, 32-bit instructions).
- Reset sets PC to 0.

## Code / Commands

```tlv
$pc[31:0] = >>1$reset ? 32'b0 : >>1$pc + 32'd4;
```

## Screenshots

<!-- Save your screenshot as day4/images/lec37_screenshot.png and remove the comment markers: -->
<!-- ![Implementation Plan and Lab for PC](images/lec37_screenshot.png) -->

## My Observations

- _Add what you observed when doing this lecture/lab._

---

[⬅ Back to index](../README.md)
