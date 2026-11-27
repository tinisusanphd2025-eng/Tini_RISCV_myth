# RV_D4SK2_L6 – RISC-V Instruction Field Decode with When Conditions

**Day 4 · Basic RISC-V CPU Micro-architecture**  
**Sub-kit D4SK2: Fetch and Decode**

## Overview

This lab completes the field decode from [D4SK2 L5](41-RV_D4SK2_L5_Lab_to_Decode_Other_Fields_of_Instructions.md) using **when conditions**. Each field (`rs1`, `rs2`, `rd`, `funct3`, `funct7`) only exists in some instruction formats, so a `$…_valid` signal is derived from the instruction type and the field is placed inside a `?$…_valid` scope.

## Which Formats Have Which Field

Read from the RISC-V base instruction format table: a field is valid for a type if its name appears in that row.

| Field | R | I | S | B | U | J |
|---|---|---|---|---|---|---|
| `rs2` | ✓ | | ✓ | ✓ | | |
| `rs1` | ✓ | ✓ | ✓ | ✓ | | |
| `funct3` | ✓ | ✓ | ✓ | ✓ | | |
| `rd` | ✓ | ✓ | | | ✓ | ✓ |
| `funct7` | ✓ | | | | | |

## Code

The when conditions are already part of the L5 code ([`src/labs/D4SK2_L5_field_decode.tlv`](../src/labs/D4SK2_L5_field_decode.tlv)). Pattern for each field:

```tlv
         $rs2_valid = $is_r_instr || $is_s_instr || $is_b_instr;
         ?$rs2_valid
            $rs2[4:0] = $instr[24:20];
```

| Line | Meaning |
|---|---|
| `$rs2_valid = …` | rs2 exists only in R, S and B formats |
| `?$rs2_valid` | "when valid": the assignment below is only meaningful in those cycles |
| `$rs2[4:0] = $instr[24:20];` | extract bits 24–20 |

## Checking in Simulation

The waveform of this code is shown in the [L5 note](41-RV_D4SK2_L5_Lab_to_Decode_Other_Fields_of_Instructions.md#screenshot). With when conditions:

- ADDI (I-type): `rs2` and `funct7` are shown grey (not valid).
- BLT (B-type): `rd` is grey (B-type has no destination register).
- ADD (R-type): all fields are valid.

## My Observations

- When conditions document the instruction formats directly in the code: the valid expressions are the rows of the format table.
- In the waveform, fields that do not exist for an instruction are greyed out instead of showing meaningless bits, which makes debugging much easier.
- In hardware, the `?$valid` scopes allow logic for unused fields to be clock-gated.

---

[⬅ Back to index](../README.md)
