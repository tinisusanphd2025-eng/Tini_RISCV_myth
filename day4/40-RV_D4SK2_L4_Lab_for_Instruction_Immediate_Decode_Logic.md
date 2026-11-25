# RV_D4SK2_L4 – Lab for Instruction Immediate Decode Logic

**Day 4 · Basic RISC-V CPU Micro-architecture**  
**Sub-kit D4SK2: Fetch and Decode**

## Overview

Builds the 32-bit sign-extended immediate for each instruction type.

## Key Points

- Immediate bits are scattered differently per type; sign bit is always `instr[31]`.

## Code / Commands

```tlv
$imm[31:0] = $is_i_instr ? { {21{$instr[31]}}, $instr[30:20] } :
             $is_s_instr ? { {21{$instr[31]}}, $instr[30:25], $instr[11:7] } :
             $is_b_instr ? { {20{$instr[31]}}, $instr[7], $instr[30:25], $instr[11:8], 1'b0 } :
             $is_u_instr ? { $instr[31:12], 12'b0 } :
             $is_j_instr ? { {12{$instr[31]}}, $instr[19:12], $instr[20], $instr[30:21], 1'b0 } :
                           32'b0;
```

## Screenshots

<!-- Save your screenshot as day4/images/lec40_screenshot.png and remove the comment markers: -->
<!-- ![Lab for Instruction Immediate Decode Logic](images/lec40_screenshot.png) -->

## My Observations

- _Add what you observed when doing this lecture/lab._

---

[⬅ Back to index](../README.md)
