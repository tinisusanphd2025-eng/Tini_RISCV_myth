# RV_D3SK1_L3 – Labs for Combinational Logic

**Day 3 · Digital Logic with TL-Verilog and Makerchip**  
**Sub-kit D3SK1: Combinational Logic in TL-Verilog Using Makerchip**

## Overview

Combinational logic labs in TL-Verilog on Makerchip: inverter, logic gates, vectors, muxes and a combinational calculator. The output depends only on the current inputs; there is no clock-to-clock state.

## How to Run in Makerchip

1. Open [makerchip.com](https://makerchip.com) → **Launch Makerchip IDE** → new project.
2. Write the logic inside the `\TLV` section (indent with **3 spaces**, no tabs).
3. Press **Ctrl + Enter** to compile and simulate.
4. Check the **WAVEFORM**, **DIAGRAM** and **VERILOG** tabs.

Inputs that are not assigned (for example `$in1`, `$in2`) get **random values** from Makerchip automatically. The ⚠ in the LOG tab just warns about this.

## Lab 1: Logic Gates

```tlv
\m4_TLV_version 1d: tl-x.org
\SV
   m4_makerchip_module
\TLV
   // Sample logical operators.
   // |: OR
   // &: AND
   // ^: XOR
   $out = $in1 & $in2;      // AND gate
   // $out = $in1 | $in2;   // OR gate
   // $out = $in1 ^ $in2;   // XOR gate
\SV
   endmodule
```

### AND gate: code and waveform

`$out` is 1 only in the cycles where both `$in1` and `$in2` are 1.

![AND gate in Makerchip](images/lec20_and_gate.png)

### XOR gate: generated Verilog and waveform

`$out` is 1 when `$in1` and `$in2` are different. The VERILOG tab shows what SandPiper generates from one line of TL-Verilog: `assign L0_out_a0 = L0_in1_a0 ^ L0_in2_a0;`

![XOR gate with SandPiper-generated Verilog](images/lec20_xor_gate_verilog.png)

## Lab 2: Vectors

```tlv
   $out[4:0] = $in1[3:0] + $in2[3:0];
```

`$out[4:0]` creates a 5-bit vector; `+` treats the vectors as binary numbers. Values in the waveform are in hex:

| in1 | in2 | out | Check (decimal) |
|---|---|---|---|
| d | c | 19 | 13 + 12 = 25 |
| 2 | d | 0f | 2 + 13 = 15 |
| b | c | 17 | 11 + 12 = 23 |
| d | d | 1a | 13 + 13 = 26 |
| c | a | 16 | 12 + 10 = 22 |

![Vectors lab in Makerchip](images/lec20_vectors.png)

## Lab 3: Mux

```tlv
   $out[7:0] = $sel ? $in1[7:0] : $in0[7:0];
```

## Lab 4: Combinational Calculator

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

## My Observations

- In TL-Verilog, signals start with `$` and need no declaration; Makerchip randomizes undriven inputs, so no testbench is needed.
- AND: the output is high only when both inputs are high. XOR: the output is high when the inputs differ.
- Vectors: two 4-bit inputs (max 15 each) can add up to 30, which needs **5 bits**, so `$out` is declared `[4:0]` to avoid overflow. Every sum in the waveform is correct.
- SandPiper turns one TL-Verilog line into a Verilog `assign` statement; the Code Comparison chart shows the TLV source is much shorter than the generated SV.

---

[⬅ Back to index](../README.md)
