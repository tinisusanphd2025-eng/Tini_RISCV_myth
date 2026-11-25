# RV_D3SK3_L4 – 2-Cycle Calculator

**Day 3 · Digital Logic with TL-Verilog and Makerchip**  
**Sub-kit D3SK3: Pipelined Logic**

## Overview

Calculator pipelined over two stages with an alternating valid counter.

## Key Points

- `$cnt` toggles each cycle; output updated only when `$cnt` is 1.
- Computation in @1, mux and output select in @2.

## Code / Commands

```tlv
|calc
   @1
      $cnt = $reset ? 0 : >>1$cnt + 1;
      $valid = $cnt;
      // operands + arithmetic
   @2
      $out[31:0] = ($reset | !$valid) ? 0 : <mux>;
```

## Screenshots

<!-- Save your screenshot as day3/images/lec26_screenshot.png and remove the comment markers: -->
<!-- ![2-Cycle Calculator](images/lec26_screenshot.png) -->

## My Observations

- _Add what you observed when doing this lecture/lab._

---

[⬅ Back to index](../README.md)
