# RV_D5SK2_L1 – Lab for Register File Bypass

**Day 5 · Complete Pipelined RISC-V CPU Micro-architecture**  
**Sub-kit D5SK2: Solutions to Pipeline Hazards**

## Overview

Fixes the RAW hazard by forwarding the previous result directly to the ALU input.

## Code / Commands

```tlv
$src1_value[31:0] = (>>1$rf_wr_en && (>>1$rd == $rs1)) ? >>1$result : $rf_rd_data1;
$src2_value[31:0] = (>>1$rf_wr_en && (>>1$rd == $rs2)) ? >>1$result : $rf_rd_data2;
```

## Screenshots

<!-- Save your screenshot as day5/images/lec55_screenshot.png and remove the comment markers: -->
<!-- ![Lab for Register File Bypass](images/lec55_screenshot.png) -->

## My Observations

- _Add what you observed when doing this lecture/lab._

---

[⬅ Back to index](../README.md)
