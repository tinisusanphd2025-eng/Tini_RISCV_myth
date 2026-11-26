# RV_D1SK3_L3 – Lab for Signed and Unsigned Numbers

**Day 1 · Introduction to RISC-V ISA and GNU Compiler Toolchain**  
**Sub-kit D1SK3: Integer Number Representation**

## Overview

Prints the max/min values of 64-bit signed and unsigned types on the RISC-V target.

## Key Points

- Use `%llu` for unsigned long long and `%lld` for signed long long.
- Shifting `1` by 63/64 must be done on a 64-bit constant (`1ULL`) to avoid overflow surprises.
- Values beyond the 64-bit range saturate at the max/min when converted from `pow()` (a double).

## Code / Commands

```c
#include <stdio.h>
#include <math.h>

int main() {
    unsigned long long umax = (unsigned long long)(pow(2,64) - 1);
    long long smax = (long long)(pow(2,63) - 1);
    long long smin = (long long)(-pow(2,63));
    printf("umax=%llu smax=%lld smin=%lld\n", umax, smax, smin);
    return 0;
}
```

### Compile and run

```bash
mkdir -p ~/riscv_labs && cd ~/riscv_labs
leafpad signed_unsigned.c &          # write the program, save, close
riscv64-unknown-elf-gcc -Ofast -mabi=lp64 -march=rv64i -o signed_unsigned.o signed_unsigned.c -lm
spike pk signed_unsigned.o
```

## Output

```text
bbl loader
umax=18446744073709551615 smax=9223372036854775807 smin=-9223372036854775808
```

| Variable | Value | Formula |
|---|---|---|
| `umax` | 18446744073709551615 | 2^64 − 1 (largest unsigned 64-bit) |
| `smax` | 9223372036854775807 | 2^63 − 1 (largest signed 64-bit) |
| `smin` | −9223372036854775808 | −2^63 (smallest signed 64-bit) |

## Screenshots

Program in Leafpad, RISC-V GCC compilation and Spike output:

![Signed and unsigned numbers – code and Spike output](images/lec08_screenshot.png)

## My Observations

- The program compiled with `riscv64-unknown-elf-gcc` (`-Ofast`, `rv64i`, `lp64`) and ran on Spike with the proxy kernel (`bbl loader` is Spike's boot loader).
- Unsigned 64-bit numbers range from 0 to 2^64 − 1; signed numbers (two's complement) range from −2^63 to 2^63 − 1.
- The signed maximum is half the unsigned maximum because the MSB is used as the sign bit.
- `-lm` links the math library needed for `pow()`.

---

[⬅ Back to index](../README.md)
