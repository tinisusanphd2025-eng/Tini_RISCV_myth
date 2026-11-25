# RV_D5SK3_L2 – Lab to Load Data from Memory to Register File

**Day 5 · Complete Pipelined RISC-V CPU Micro-architecture**  
**Sub-kit D5SK3: Load/Store Instructions and Completing the RISC-V CPU**

## Overview

Writes loaded data into the register file two cycles later.

## Code / Commands

```tlv
$rf_wr_en = ($valid && $rd_valid && $rd != 5'b0) || >>2$valid_load;
$rf_wr_index[4:0] = >>2$valid_load ? >>2$rd : $rd;
$rf_wr_data[31:0] = >>2$valid_load ? >>2$ld_data : $result;
```

## Screenshots

<!-- Save your screenshot as day5/images/lec60_screenshot.png and remove the comment markers: -->
<!-- ![Lab to Load Data from Memory to Register File](images/lec60_screenshot.png) -->

## My Observations

- _Add what you observed when doing this lecture/lab._

---

[⬅ Back to index](../README.md)
