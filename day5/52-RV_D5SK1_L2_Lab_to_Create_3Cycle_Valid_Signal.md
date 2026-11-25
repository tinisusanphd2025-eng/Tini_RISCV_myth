# RV_D5SK1_L2 – Lab to Create 3-Cycle Valid Signal

**Day 5 · Complete Pipelined RISC-V CPU Micro-architecture**  
**Sub-kit D5SK1: Pipelining the CPU**

## Overview

Starts by only issuing one instruction every three cycles.

## Code / Commands

```tlv
$start = >>1$reset && !$reset;
$valid = $reset ? 1'b0 : $start ? 1'b1 : >>3$valid;
```

## Screenshots

<!-- Save your screenshot as day5/images/lec52_screenshot.png and remove the comment markers: -->
<!-- ![Lab to Create 3-Cycle Valid Signal](images/lec52_screenshot.png) -->

## My Observations

- _Add what you observed when doing this lecture/lab._

---

[⬅ Back to index](../README.md)
