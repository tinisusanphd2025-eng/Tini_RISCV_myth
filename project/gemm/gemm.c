// 2x2 GEMM (C = A x B) for the RVMYTH RV32I CPU.
// Bare-metal: no libraries, no stack, no MUL instruction (RV32I).
// Data memory layout (word addresses, 4 bytes each):
//   A = mem[0..3], B = mem[4..7], C = mem[8..11]

#define N 2

// Shift-and-add multiply (RV32I has no MUL instruction).
static inline int mul(int a, int b) {
    int result = 0;
    while (b != 0) {
        if (b & 1)
            result += a;
        a <<= 1;
        b >>= 1;
    }
    return result;
}

void _start(void) {
    volatile int *mem = (volatile int *)0;   // data memory starts at address 0
    volatile int *A = mem;
    volatile int *B = mem + 4;
    volatile int *C = mem + 8;

    // Initialise A = [1 2; 3 4], B = [5 6; 7 8]
    A[0] = 1; A[1] = 2; A[2] = 3; A[3] = 4;
    B[0] = 5; B[1] = 6; B[2] = 7; B[3] = 8;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            int sum = 0;
            for (int k = 0; k < N; k++)
                sum += mul(A[i * N + k], B[k * N + j]);
            C[i * N + j] = sum;
        }
    // Expected C = [19 22; 43 50]
    while (1) ;   // done: stay here (end of program)
}
