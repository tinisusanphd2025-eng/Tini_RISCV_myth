# RV_D4SK3_L3 – Lab for ALU Operations for add/addi

**Day 4 · Basic RISC-V CPU Micro-architecture**  
**Sub-kit D4SK3: RISC-V Control Logic**

## Overview

First ALU: supports `add` and `addi`.

## Code / Commands

```tlv
$result[31:0] = $is_addi ? $src1_value + $imm :
                $is_add  ? $src1_value + $src2_value :
                           32'bx;
```

## Screenshots

<!-- Save your screenshot as day4/images/lec45_screenshot.png and remove the comment markers: -->
<!-- ![Lab for ALU Operations for add/addi](images/lec45_screenshot.png) -->

## My Observations

- _Add what you observed when doing this lecture/lab._

---

[⬅ Back to index](../README.md)
