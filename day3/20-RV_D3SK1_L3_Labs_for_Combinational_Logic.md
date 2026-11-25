# RV_D3SK1_L3 – Labs for Combinational Logic

**Day 3 · Digital Logic with TL-Verilog and Makerchip**  
**Sub-kit D3SK1: Combinational Logic in TL-Verilog Using Makerchip**

## Overview

Inverter, gates, vectors, muxes and a combinational calculator.

## Key Points

- Use `$rand` signals for random stimulus during simulation.
- Calculator computes sum, diff, prod, quot and selects with `$op[1:0]`.

## Code / Commands

```tlv
$val1[31:0] = $rand1[3:0];
$val2[31:0] = $rand2[3:0];
$sum[31:0]  = $val1 + $val2;
$diff[31:0] = $val1 - $val2;
$prod[31:0] = $val1 * $val2;
$quot[31:0] = $val1 / $val2;
$out[31:0]  = ($op[1:0] == 2'b00) ? $sum  :
              ($op[1:0] == 2'b01) ? $diff :
              ($op[1:0] == 2'b10) ? $prod : $quot;
```

## Screenshots

<!-- Save your screenshot as day3/images/lec20_screenshot.png and remove the comment markers: -->
<!-- ![Labs for Combinational Logic](images/lec20_screenshot.png) -->

## My Observations

- _Add what you observed when doing this lecture/lab._

---

[⬅ Back to index](../README.md)
