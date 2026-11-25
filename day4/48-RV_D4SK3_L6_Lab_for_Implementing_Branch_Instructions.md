# RV_D4SK3_L6 – Lab for Implementing Branch Instructions

**Day 4 · Basic RISC-V CPU Micro-architecture**  
**Sub-kit D4SK3: RISC-V Control Logic**

## Overview

Evaluates branch conditions for BEQ, BNE, BLT, BGE, BLTU, BGEU.

## Key Points

- Signed compares XOR the sign bits to flip the result.

## Code / Commands

```tlv
$taken_br = $is_beq  ? ($src1_value == $src2_value) :
            $is_bne  ? ($src1_value != $src2_value) :
            $is_blt  ? (($src1_value < $src2_value) ^ ($src1_value[31] != $src2_value[31])) :
            $is_bge  ? (($src1_value >= $src2_value) ^ ($src1_value[31] != $src2_value[31])) :
            $is_bltu ? ($src1_value < $src2_value) :
            $is_bgeu ? ($src1_value >= $src2_value) : 1'b0;
```

## Screenshots

<!-- Save your screenshot as day4/images/lec48_screenshot.png and remove the comment markers: -->
<!-- ![Lab for Implementing Branch Instructions](images/lec48_screenshot.png) -->

## My Observations

- _Add what you observed when doing this lecture/lab._

---

[⬅ Back to index](../README.md)
