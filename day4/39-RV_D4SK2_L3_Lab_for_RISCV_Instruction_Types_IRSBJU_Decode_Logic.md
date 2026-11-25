# RV_D4SK2_L3 – Lab for RISC-V Instruction Types IRSBJU Decode Logic

**Day 4 · Basic RISC-V CPU Micro-architecture**  
**Sub-kit D4SK2: Fetch and Decode**

## Overview

Decodes the instruction type from opcode bits `instr[6:2]`.

## Key Points

- Bits [1:0] are always `11` for 32-bit instructions.
- Types: I, R, S, B, J, U.

## Code / Commands

```tlv
$is_i_instr = $instr[6:2] ==? 5'b0000x || $instr[6:2] ==? 5'b001x0 ||
             $instr[6:2] == 5'b11001;
$is_r_instr = $instr[6:2] == 5'b01011 || $instr[6:2] ==? 5'b011x0 ||
             $instr[6:2] == 5'b10100;
$is_s_instr = $instr[6:2] ==? 5'b0100x;
$is_b_instr = $instr[6:2] == 5'b11000;
$is_j_instr = $instr[6:2] == 5'b11011;
$is_u_instr = $instr[6:2] ==? 5'b0x101;
```

## Screenshots

<!-- Save your screenshot as day4/images/lec39_screenshot.png and remove the comment markers: -->
<!-- ![Lab for RISC-V Instruction Types IRSBJU Decode Logic](images/lec39_screenshot.png) -->

## My Observations

- _Add what you observed when doing this lecture/lab._

---

[⬅ Back to index](../README.md)
