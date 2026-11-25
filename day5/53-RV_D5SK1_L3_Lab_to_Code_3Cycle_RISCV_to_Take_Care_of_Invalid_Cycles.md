# RV_D5SK1_L3 – Lab to Code 3-Cycle RISC-V to Take Care of Invalid Cycles

**Day 5 · Complete Pipelined RISC-V CPU Micro-architecture**  
**Sub-kit D5SK1: Pipelining the CPU**

## Overview

Gate register-file writes and branches with `$valid`.

## Key Points

- `$valid_taken_br = $valid && $taken_br`.
- `$rf_wr_en` includes `$valid` so invalid instructions have no effect.

## Screenshots

<!-- Save your screenshot as day5/images/lec53_screenshot.png and remove the comment markers: -->
<!-- ![Lab to Code 3-Cycle RISC-V to Take Care of Invalid Cycles](images/lec53_screenshot.png) -->

## My Observations

- _Add what you observed when doing this lecture/lab._

---

[⬅ Back to index](../README.md)
