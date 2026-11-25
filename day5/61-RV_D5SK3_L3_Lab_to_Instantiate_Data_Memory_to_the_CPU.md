# RV_D5SK3_L3 – Lab to Instantiate Data Memory to the CPU

**Day 5 · Complete Pipelined RISC-V CPU Micro-architecture**  
**Sub-kit D5SK3: Load/Store Instructions and Completing the RISC-V CPU**

## Overview

Connects the data memory macro: address from the ALU result, data from `rs2`.

## Code / Commands

```tlv
$dmem_wr_en = $is_s_instr && $valid;
$dmem_rd_en = $is_load;
$dmem_addr[3:0] = $result[5:2];
$dmem_wr_data[31:0] = $src2_value;
$ld_data[31:0] = $dmem_rd_data;
```

## Screenshots

<!-- Save your screenshot as day5/images/lec61_screenshot.png and remove the comment markers: -->
<!-- ![Lab to Instantiate Data Memory to the CPU](images/lec61_screenshot.png) -->

## My Observations

- _Add what you observed when doing this lecture/lab._

---

[⬅ Back to index](../README.md)
