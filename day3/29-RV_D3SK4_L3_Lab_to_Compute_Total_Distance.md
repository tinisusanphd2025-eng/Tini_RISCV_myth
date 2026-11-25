# RV_D3SK4_L3 – Lab to Compute Total Distance

**Day 3 · Digital Logic with TL-Verilog and Makerchip**  
**Sub-kit D3SK4: Validity**

## Overview

Accumulates the Pythagoras distance only for valid transactions.

## Key Points

- `$tot_dist` holds its value when `$valid` is low.
- Reset clears the total.

## Code / Commands

```tlv
$tot_dist[63:0] = $reset ? 0 :
                  $valid ? >>1$tot_dist + $cc :
                           >>1$tot_dist;
```

## Screenshots

<!-- Save your screenshot as day3/images/lec29_screenshot.png and remove the comment markers: -->
<!-- ![Lab to Compute Total Distance](images/lec29_screenshot.png) -->

## My Observations

- _Add what you observed when doing this lecture/lab._

---

[⬅ Back to index](../README.md)
