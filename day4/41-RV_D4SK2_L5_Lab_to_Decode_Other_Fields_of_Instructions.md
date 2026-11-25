# RV_D4SK2_L5 – Lab to Decode Other Fields of Instructions

**Day 4 · Basic RISC-V CPU Micro-architecture**  
**Sub-kit D4SK2: Fetch and Decode**

## Overview

Extracts rs1, rs2, rd, funct3, funct7 and opcode with their valid conditions.

## Key Points

- `rs2` valid for R/S/B; `rs1`/`funct3` valid for R/I/S/B; `rd` valid for R/I/U/J.
- Valid-when scopes (`?$rs1_valid`) keep the waveform clean.

## Code / Commands

```tlv
$rs2_valid = $is_r_instr || $is_s_instr || $is_b_instr;
?$rs2_valid
   $rs2[4:0] = $instr[24:20];
$rd_valid = ($is_r_instr || $is_i_instr || $is_u_instr || $is_j_instr) && $instr[11:7] != 0;
?$rd_valid
   $rd[4:0] = $instr[11:7];
```

## Screenshots

<!-- Save your screenshot as day4/images/lec41_screenshot.png and remove the comment markers: -->
<!-- ![Lab to Decode Other Fields of Instructions](images/lec41_screenshot.png) -->

## My Observations

- _Add what you observed when doing this lecture/lab._

---

[⬅ Back to index](../README.md)
