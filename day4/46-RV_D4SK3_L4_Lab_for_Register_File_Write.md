# RV_D4SK3_L4 – Lab for Register File Write

**Day 4 · Basic RISC-V CPU Micro-architecture**  
**Sub-kit D4SK3: RISC-V Control Logic**

## Overview

Writes the ALU result back to `rd`; never write `x0`.

## Code / Commands

```tlv
$rf_wr_en = $rd_valid && $rd != 5'b0;
$rf_wr_index[4:0] = $rd;
$rf_wr_data[31:0] = $result;
```

## Screenshots

<!-- Save your screenshot as day4/images/lec46_screenshot.png and remove the comment markers: -->
<!-- ![Lab for Register File Write](images/lec46_screenshot.png) -->

## My Observations

- _Add what you observed when doing this lecture/lab._

---

[⬅ Back to index](../README.md)
