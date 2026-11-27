# RV_D4SK2_L7 – Lab to Decode Individual Instructions

**Day 4 · Basic RISC-V CPU Micro-architecture**  
**Sub-kit D4SK2: Fetch and Decode**

## Overview

Combines funct7[5], funct3 and opcode to identify each instruction.

## Key Points

- `$dec_bits = {$funct7[5], $funct3, $opcode}`.

## Code / Commands

```tlv
$dec_bits[10:0] = {$funct7[5], $funct3, $opcode};
$is_beq  = $dec_bits ==? 11'bx_000_1100011;
$is_bne  = $dec_bits ==? 11'bx_001_1100011;
$is_addi = $dec_bits ==? 11'bx_000_0010011;
$is_add  = $dec_bits ==  11'b0_000_0110011;
```

## Screenshots

<!-- Save your screenshot as day4/images/lec42_screenshot.png and remove the comment markers: -->
<!-- ![Lab to Decode Individual Instructions](images/lec42_screenshot.png) -->

## My Observations

- _Add what you observed when doing this lecture/lab._

---

[⬅ Back to index](../README.md)
