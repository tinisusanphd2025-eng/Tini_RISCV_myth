# RV_D3SK2_L1 – Introduction to Sequential Logic and Counter Lab

**Day 3 · Digital Logic with TL-Verilog and Makerchip**  
**Sub-kit D3SK2: Sequential Logic**

## Overview

Flip-flops hold state between clock cycles; `>>1` refers to a signal's previous-cycle value.

## Key Points

- `$reset` forces a known starting state.
- `>>1$cnt` = value of `$cnt` one cycle earlier.

## Code / Commands

```tlv
$cnt[31:0] = $reset ? 0 : >>1$cnt + 1;
```

## Screenshots

<!-- Save your screenshot as day3/images/lec21_screenshot.png and remove the comment markers: -->
<!-- ![Introduction to Sequential Logic and Counter Lab](images/lec21_screenshot.png) -->

## My Observations

- _Add what you observed when doing this lecture/lab._

---

[⬅ Back to index](../README.md)
