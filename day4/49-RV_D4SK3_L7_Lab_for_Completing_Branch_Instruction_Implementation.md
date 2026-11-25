# RV_D4SK3_L7 – Lab for Completing Branch Instruction Implementation

**Day 4 · Basic RISC-V CPU Micro-architecture**  
**Sub-kit D4SK3: RISC-V Control Logic**

## Overview

Computes the branch target and feeds it into the PC mux.

## Code / Commands

```tlv
$br_tgt_pc[31:0] = $pc + $imm;
$pc[31:0] = >>1$reset    ? 32'b0 :
            >>1$taken_br ? >>1$br_tgt_pc :
                           >>1$pc + 32'd4;
```

## Screenshots

<!-- Save your screenshot as day4/images/lec49_screenshot.png and remove the comment markers: -->
<!-- ![Lab for Completing Branch Instruction Implementation](images/lec49_screenshot.png) -->

## My Observations

- _Add what you observed when doing this lecture/lab._

---

[⬅ Back to index](../README.md)
