# RV_D5SK2_L2 – Lab for Branches to Correct the Branch Target Path

**Day 5 · Complete Pipelined RISC-V CPU Micro-architecture**  
**Sub-kit D5SK2: Solutions to Pipeline Hazards**

## Overview

Removes the 3-cycle restriction; invalidates the two instructions after a taken branch.

## Code / Commands

```tlv
$valid = !(>>1$valid_taken_br || >>2$valid_taken_br);
$pc[31:0] = >>1$reset ? 32'b0 :
            >>3$valid_taken_br ? >>3$br_tgt_pc :
                                 >>1$pc + 32'd4;
```

## Screenshots

<!-- Save your screenshot as day5/images/lec56_screenshot.png and remove the comment markers: -->
<!-- ![Lab for Branches to Correct the Branch Target Path](images/lec56_screenshot.png) -->

## My Observations

- _Add what you observed when doing this lecture/lab._

---

[⬅ Back to index](../README.md)
