# RV_D2SK3_L1 – Lab to Run C Program on RISC-V CPU

**Day 2 · Introduction to ABI and Basic Verification Flow**  
**Sub-kit D2SK3: Basic Verification Flow Using iverilog**

## Overview

Runs the program on an actual RISC-V core (PicoRV32) in a Verilog testbench with iverilog.

## Key Points

- The program is converted into a hex file loaded into the testbench memory.
- `rv32im.sh` builds the hex and runs the iverilog simulation.
- Same result as Spike confirms the hardware executes the binary correctly.

## Code / Commands

```bash
git clone https://github.com/kunalg123/riscv_workshop_collaterals.git
cd riscv_workshop_collaterals/labs
chmod 777 rv32im.sh
./rv32im.sh
```

## Screenshots

<!-- Save your screenshot as day2/images/lec16_screenshot.png and remove the comment markers: -->
<!-- ![Lab to Run C Program on RISC-V CPU](images/lec16_screenshot.png) -->

## My Observations

- _Add what you observed when doing this lecture/lab._

---

[⬅ Back to index](../README.md)
