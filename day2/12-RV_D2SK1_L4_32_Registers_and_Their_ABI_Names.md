# RV_D2SK1_L4 – 32 Registers and Their ABI Names

**Day 2 · Introduction to ABI and Basic Verification Flow**  
**Sub-kit D2SK1: Application Binary Interface (ABI)**

## Overview

Register conventions used by compilers and assembly programmers.

## Key Points

- `x0` zero (hard-wired 0), `x1` ra, `x2` sp, `x3` gp, `x4` tp.
- `x5–x7`, `x28–x31` t0–t6: temporaries (caller-saved).
- `x8–x9`, `x18–x27` s0–s11: saved registers (callee-saved).
- `x10–x17` a0–a7: arguments / return values.
- 5 bits address the 32 registers in each instruction field.

## Screenshots

<!-- Save your screenshot as day2/images/lec12_screenshot.png and remove the comment markers: -->
<!-- ![32 Registers and Their ABI Names](images/lec12_screenshot.png) -->

## My Observations

- _Add what you observed when doing this lecture/lab._

---

[⬅ Back to index](../README.md)
