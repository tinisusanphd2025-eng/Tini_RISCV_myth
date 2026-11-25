# RV_D4SK3_L1 – Lab for Register File Read

**Day 4 · Basic RISC-V CPU Micro-architecture**  
**Sub-kit D4SK3: RISC-V Control Logic**

## Overview

Connects decoded rs1/rs2 to the register file's two read ports.

## Key Points

- Read enable driven by `$rs1_valid` / `$rs2_valid`.

## Code / Commands

```tlv
$rf_rd_en1 = $rs1_valid;
$rf_rd_index1[4:0] = $rs1;
$rf_rd_en2 = $rs2_valid;
$rf_rd_index2[4:0] = $rs2;
$src1_value[31:0] = $rf_rd_data1;
$src2_value[31:0] = $rf_rd_data2;
```

## Screenshots

<!-- Save your screenshot as day4/images/lec43_screenshot.png and remove the comment markers: -->
<!-- ![Lab for Register File Read](images/lec43_screenshot.png) -->

## My Observations

- _Add what you observed when doing this lecture/lab._

---

[⬅ Back to index](../README.md)
