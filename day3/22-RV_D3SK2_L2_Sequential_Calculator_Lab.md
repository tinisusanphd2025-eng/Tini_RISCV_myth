# RV_D3SK2_L2 – Sequential Calculator Lab

**Day 3 · Digital Logic with TL-Verilog and Makerchip**  
**Sub-kit D3SK2: Sequential Logic**

## Overview

The calculator's output feeds back as the first operand of the next calculation.

## Key Points

- `$val1 = >>1$out` makes it behave like a real calculator.

## Code / Commands

```tlv
$val1[31:0] = >>1$out;
$out[31:0]  = $reset ? 0 : <calculator mux>;
```

## Screenshots

<!-- Save your screenshot as day3/images/lec22_screenshot.png and remove the comment markers: -->
<!-- ![Sequential Calculator Lab](images/lec22_screenshot.png) -->

## My Observations

- _Add what you observed when doing this lecture/lab._

---

[⬅ Back to index](../README.md)
