# RV_D5SK3_L5 – Lab to Add Control Logic for Jump Instructions

**Day 5 · Complete Pipelined RISC-V CPU Micro-architecture**  
**Sub-kit D5SK3: Load/Store Instructions and Completing the RISC-V CPU**

## Overview

Implements JAL and JALR redirects.

## Code / Commands

```tlv
$is_jump = $is_jal || $is_jalr;
$jalr_tgt_pc[31:0] = $src1_value + $imm;
$pc[31:0] = >>1$reset ? 32'b0 :
   >>3$valid_taken_br ? >>3$br_tgt_pc :
   >>3$valid_load     ? >>3$inc_pc :
   >>3$valid_jump && >>3$is_jal  ? >>3$br_tgt_pc :
   >>3$valid_jump && >>3$is_jalr ? >>3$jalr_tgt_pc :
                                   >>1$inc_pc;
```

## Screenshots

<!-- Save your screenshot as day5/images/lec63_screenshot.png and remove the comment markers: -->
<!-- ![Lab to Add Control Logic for Jump Instructions](images/lec63_screenshot.png) -->

## My Observations

- _Add what you observed when doing this lecture/lab._

---

[⬅ Back to index](../README.md)
