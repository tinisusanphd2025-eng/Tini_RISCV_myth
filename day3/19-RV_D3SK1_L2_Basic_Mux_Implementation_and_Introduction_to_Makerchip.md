# RV_D3SK1_L2 – Basic Mux Implementation and Introduction to Makerchip

**Day 3 · Digital Logic with TL-Verilog and Makerchip**  
**Sub-kit D3SK1: Combinational Logic in TL-Verilog Using Makerchip**

## Overview

Multiplexers and how they are written in TL-Verilog.

## Key Points

- Ternary operator gives a compact mux: `$out = $sel ? $in1 : $in0;`
- Chained ternaries build wide/priority muxes.
- In TL-Verilog, `$` signals are pipesignals; no declarations needed.

## Code / Commands

```tlv
$out = $sel[1] ? ($sel[0] ? $in3 : $in2)
                : ($sel[0] ? $in1 : $in0);
```

## Screenshots

<!-- Save your screenshot as day3/images/lec19_screenshot.png and remove the comment markers: -->
<!-- ![Basic Mux Implementation and Introduction to Makerchip](images/lec19_screenshot.png) -->

## My Observations

- _Add what you observed when doing this lecture/lab._

---

[⬅ Back to index](../README.md)
