# RV_D4SK2_L2 – Lab for Instruction Fetch Logic

**Day 4 · Basic RISC-V CPU Micro-architecture**  
**Sub-kit D4SK2: Fetch and Decode**

## Overview

Reads the instruction from instruction memory using the PC.

## Key Points

- Address = PC[5:2] (word index) for a small IMem.
- `$imem_rd_data` becomes `$instr`.

## Code / Commands

```tlv
$imem_rd_en = !$reset;
$imem_rd_addr[M4_IMEM_INDEX_CNT-1:0] = $pc[M4_IMEM_INDEX_CNT+1:2];
$instr[31:0] = $imem_rd_data[31:0];
```

## Screenshots

<!-- Save your screenshot as day4/images/lec38_screenshot.png and remove the comment markers: -->
<!-- ![Lab for Instruction Fetch Logic](images/lec38_screenshot.png) -->

## My Observations

- _Add what you observed when doing this lecture/lab._

---

[⬅ Back to index](../README.md)
