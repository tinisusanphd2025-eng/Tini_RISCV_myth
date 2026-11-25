# RV_D2SK1_L3 – Load, Add and Store Instructions with Example

**Day 2 · Introduction to ABI and Basic Verification Flow**  
**Sub-kit D2SK1: Application Binary Interface (ABI)**

## Overview

Walks through the three basic instruction kinds and their encodings.

## Key Points

- `ld rd, imm(rs1)` – load doubleword: rd = Mem[rs1 + imm] (I-type).
- `add rd, rs1, rs2` – register add (R-type).
- `sd rs2, imm(rs1)` – store doubleword: Mem[rs1 + imm] = rs2 (S-type).
- Fields: opcode[6:0], rd[11:7], funct3[14:12], rs1[19:15], rs2[24:20], funct7[31:25].

## Code / Commands

```asm
ld  x8, 16(x23)   # x8  = Mem[x23 + 16]
add x8, x24, x8   # x8  = x24 + x8
sd  x8, 8(x23)    # Mem[x23 + 8] = x8
```

## Screenshots

<!-- Save your screenshot as day2/images/lec11_screenshot.png and remove the comment markers: -->
<!-- ![Load, Add and Store Instructions with Example](images/lec11_screenshot.png) -->

## My Observations

- _Add what you observed when doing this lecture/lab._

---

[⬅ Back to index](../README.md)
