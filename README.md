# NASSCOM RISC-V based MYTH Program Notes

Day-wise notes, lab write-ups and screenshots from the **RISC-V based MYTH** (Microprocessor for You in Thirty Hours) workshop by VLSI System Design (VSD) and NASSCOM.

**Topics covered:** RISC-V ISA · GNU toolchain · Spike · ABI · iverilog verification · TL-Verilog · Makerchip · combinational, sequential & pipelined logic · validity · RV32I CPU micro-architecture · pipeline hazards · load/store · jumps

## Table of Contents

- [Day 1: Introduction to RISC-V ISA and GNU Compiler Toolchain](#day-1-introduction-to-risc-v-isa-and-gnu-compiler-toolchain)
- [Day 2: Introduction to ABI and Basic Verification Flow](#day-2-introduction-to-abi-and-basic-verification-flow)
- [Day 3: Digital Logic with TL-Verilog and Makerchip](#day-3-digital-logic-with-tl-verilog-and-makerchip)
- [Day 4: Basic RISC-V CPU Micro-architecture](#day-4-basic-risc-v-cpu-micro-architecture)
- [Day 5: Complete Pipelined RISC-V CPU Micro-architecture](#day-5-complete-pipelined-risc-v-cpu-micro-architecture)
- [MakerChip Link, Files and Screenshots](#makerchip-link-files-and-screenshots)

---

## Day 1: Introduction to RISC-V ISA and GNU Compiler Toolchain

### D1SK1: Introduction to Basic Keywords

- [L1 – Introduction to RISC-V Basic Keywords](day1/00-RV_D1SK1_L1_Introduction_to_RISCV_Basic_Keywords.md)
- [L2 – From Apps to Hardware](day1/01-RV_D1SK1_L2_From_Apps_to_Hardware.md)
- [L3 – Detailed Description of Course Content](day1/02-RV_D1SK1_L3_Detailed_Description_of_Course_Content.md)

### D1SK2: Labs Using RISC-V Toolchain

- [L1 – C Program to Compute Sum from 1 to N](day1/03-RV_D1SK2_L1_C_Program_to_Compute_Sum_from_1_to_N.md)
- [L2 – RISC-V GCC Compile and Disassemble](day1/04-RV_D1SK2_L2_RISCV_GCC_Compile_and_Disassemble.md)
- [L3 – Spike Simulation and Debug](day1/05-RV_D1SK2_L3_Spike_Simulation_and_Debug.md)

### D1SK3: Integer Number Representation

- [L1 – 64-bit Number System for Unsigned Numbers](day1/06-RV_D1SK3_L1_64bit_Number_System_for_Unsigned_Numbers.md)
- [L2 – 64-bit Number System for Signed Numbers](day1/07-RV_D1SK3_L2_64bit_Number_System_for_Signed_Numbers.md)
- [L3 – Lab for Signed and Unsigned Numbers](day1/08-RV_D1SK3_L3_Lab_for_Signed_and_Unsigned_Numbers.md)

## Day 2: Introduction to ABI and Basic Verification Flow

### D2SK1: Application Binary Interface (ABI)

- [L1 – Introduction to Application Binary Interface](day2/09-RV_D2SK1_L1_Introduction_to_Application_Binary_Interface.md)
- [L2 – Memory Allocation for Double Words](day2/10-RV_D2SK1_L2_Memory_Allocation_for_Double_Words.md)
- [L3 – Load, Add and Store Instructions with Example](day2/11-RV_D2SK1_L3_Load_Add_and_Store_Instructions_with_Example.md)
- [L4 – 32 Registers and Their ABI Names](day2/12-RV_D2SK1_L4_32_Registers_and_Their_ABI_Names.md)

### D2SK2: Labwork Using ABI Function Calls

- [L1 – Study New Algorithm for Sum 1 to N Using ASM](day2/13-RV_D2SK2_L1_Study_New_Algorithm_for_Sum_1_to_N_Using_ASM.md)
- [L2 – Review ASM Function Calls](day2/14-RV_D2SK2_L2_Review_ASM_Function_Calls.md)
- [L3 – Simulate New C Program with Function Call](day2/15-RV_D2SK2_L3_Simulate_New_C_Program_with_Function_Call.md)

### D2SK3: Basic Verification Flow Using iverilog

- [L1 – Lab to Run C Program on RISC-V CPU](day2/16-RV_D2SK3_L1_Lab_to_Run_C_Program_on_RISCV_CPU.md)

## Day 3: Digital Logic with TL-Verilog and Makerchip

### D3SK1: Combinational Logic in TL-Verilog Using Makerchip

- [L0 – Welcome](day3/17-RV_D3SK1_L0_Welcome.md)
- [L1 – Introduction to Logic Gates](day3/18-RV_D3SK1_L1_Introduction_to_Logic_Gates.md)
- [L2 – Basic Mux Implementation and Introduction to Makerchip](day3/19-RV_D3SK1_L2_Basic_Mux_Implementation_and_Introduction_to_Makerchip.md)
- [L3 – Labs for Combinational Logic](day3/20-RV_D3SK1_L3_Labs_for_Combinational_Logic.md)

### D3SK2: Sequential Logic

- [L1 – Introduction to Sequential Logic and Counter Lab](day3/21-RV_D3SK2_L1_Introduction_to_Sequential_Logic_and_Counter_Lab.md)
- [L2 – Sequential Calculator Lab](day3/22-RV_D3SK2_L2_Sequential_Calculator_Lab.md)

### D3SK3: Pipelined Logic

- [L1 – Pipelined Logic and Retiming](day3/23-RV_D3SK3_L1_Pipelined_Logic_and_Retiming.md)
- [L2 – Pipeline Logic Advantages and Demo](day3/24-RV_D3SK3_L2_Pipeline_Logic_Advantages_and_Demo.md)
- [L3 – Lab on Error Conditions Within Computation Pipeline](day3/25-RV_D3SK3_L3_Lab_on_Error_Conditions_Within_Computation_Pipeline.md)
- [L4 – 2-Cycle Calculator](day3/26-RV_D3SK3_L4_2Cycle_Calculator.md)

### D3SK4: Validity

- [L1 – Introduction to Validity and Its Advantages](day3/27-RV_D3SK4_L1_Introduction_to_Validity_and_Its_Advantages.md)
- [L2 – Lab on Validity and Valid-When Condition](day3/28-RV_D3SK4_L2_Lab_on_Validity_and_ValidWhen_Condition.md)
- [L3 – Lab to Compute Total Distance](day3/29-RV_D3SK4_L3_Lab_to_Compute_Total_Distance.md)
- [L4 – 2-Cycle Calculator with Validity](day3/30-RV_D3SK4_L4_2Cycle_Calculator_with_Validity.md)
- [L5 – Calculator Single-Value Memory Lab](day3/31-RV_D3SK4_L5_Calculator_SingleValue_Memory_Lab.md)

### D3SK5: Hierarchy (Bonus)

- [L1 – Introduction to Hierarchy Concept (Bonus)](day3/32-RV_D3SK5_L1_Introduction_to_Hierarchy_Concept_Bonus.md)
- [L2 – Day 3 Closer](day3/33-RV_D3SK5_L2_Day_3_Closer.md)

## Day 4: Basic RISC-V CPU Micro-architecture

### D4SK1: Microarchitecture and Testbench for a Simple RISC-V CPU

- [L1 – Microarchitecture of a Single-Cycle RISC-V CPU](day4/34-RV_D4SK1_L1_Microarchitecture_of_a_SingleCycle_RISCV_CPU.md)
- [L2 – Lab: Makerchip Platform Shell (Part 1)](day4/35-RV_D4SK1_L2_Lab_Makerchip_Platform_Shell_Part_1.md)
- [L3 – Lab: Makerchip Platform Shell (Part 2)](day4/36-RV_D4SK1_L3_Lab_Makerchip_Platform_Shell_Part_2.md)

### D4SK2: Fetch and Decode

- [L1 – Implementation Plan and Lab for PC](day4/37-RV_D4SK2_L1_Implementation_Plan_and_Lab_for_PC.md)
- [L2 – Lab for Instruction Fetch Logic](day4/38-RV_D4SK2_L2_Lab_for_Instruction_Fetch_Logic.md)
- [L3 – Lab for RISC-V Instruction Types IRSBJU Decode Logic](day4/39-RV_D4SK2_L3_Lab_for_RISCV_Instruction_Types_IRSBJU_Decode_Logic.md)
- [L4 – Lab for Instruction Immediate Decode Logic](day4/40-RV_D4SK2_L4_Lab_for_Instruction_Immediate_Decode_Logic.md)
- [L5 – Lab to Decode Other Fields of Instructions](day4/41-RV_D4SK2_L5_Lab_to_Decode_Other_Fields_of_Instructions.md)
- [L6 – RISC-V Instruction Field Decode with When Conditions](day4/42-RV_D4SK2_L6_Field_Decode_with_When_Conditions.md)
- [L7 – Lab to Decode Individual Instructions](day4/42b-RV_D4SK2_L7_Lab_to_Decode_Individual_Instructions.md)

### D4SK3: RISC-V Control Logic

- [L1 – Lab for Register File Read](day4/43-RV_D4SK3_L1_Lab_for_Register_File_Read.md)
- [L2 – Lab for Register File Read (Part 2)](day4/44-RV_D4SK3_L2_Lab_for_Register_File_Read_Part_2.md)
- [L3 – Lab for ALU Operations for add/addi](day4/45-RV_D4SK3_L3_Lab_for_ALU_Operations_for_addaddi.md)
- [L4 – Lab for Register File Write](day4/46-RV_D4SK3_L4_Lab_for_Register_File_Write.md)
- [L5 – Concept of Array and Register File Details](day4/47-RV_D4SK3_L5_Concept_of_Array_and_Register_File_Details.md)
- [L6 – Lab for Implementing Branch Instructions](day4/48-RV_D4SK3_L6_Lab_for_Implementing_Branch_Instructions.md)
- [L7 – Lab for Completing Branch Instruction Implementation](day4/49-RV_D4SK3_L7_Lab_for_Completing_Branch_Instruction_Implementation.md)
- [L8 – Lab to Create Simple Testbench](day4/50-RV_D4SK3_L8_Lab_to_Create_Simple_Testbench.md)

## Day 5: Complete Pipelined RISC-V CPU Micro-architecture

### D5SK1: Pipelining the CPU

- [L1 – Introduction to Control Flow Hazard and Read-After-Write Hazard](day5/51-RV_D5SK1_L1_Introduction_to_Control_Flow_Hazard_and_ReadAfterWrite_Hazard.md)
- [L2 – Lab to Create 3-Cycle Valid Signal](day5/52-RV_D5SK1_L2_Lab_to_Create_3Cycle_Valid_Signal.md)
- [L3 – Lab to Code 3-Cycle RISC-V to Take Care of Invalid Cycles](day5/53-RV_D5SK1_L3_Lab_to_Code_3Cycle_RISCV_to_Take_Care_of_Invalid_Cycles.md)
- [L4 – Lab to Modify 3-Cycle RISC-V to Distribute Logic](day5/54-RV_D5SK1_L4_Lab_to_Modify_3Cycle_RISCV_to_Distribute_Logic.md)

### D5SK2: Solutions to Pipeline Hazards

- [L1 – Lab for Register File Bypass](day5/55-RV_D5SK2_L1_Lab_for_Register_File_Bypass.md)
- [L2 – Lab for Branches to Correct the Branch Target Path](day5/56-RV_D5SK2_L2_Lab_for_Branches_to_Correct_the_Branch_Target_Path.md)
- [L3 – Lab to Complete Instruction Decode](day5/57-RV_D5SK2_L3_Lab_to_Complete_Instruction_Decode.md)
- [L4 – Lab to Code Complete ALU](day5/58-RV_D5SK2_L4_Lab_to_Code_Complete_ALU.md)

### D5SK3: Load/Store Instructions and Completing the RISC-V CPU

- [L1 – Introduction to Load/Store and Lab to Redirect Loads](day5/59-RV_D5SK3_L1_Introduction_to_LoadStore_and_Lab_to_Redirect_Loads.md)
- [L2 – Lab to Load Data from Memory to Register File](day5/60-RV_D5SK3_L2_Lab_to_Load_Data_from_Memory_to_Register_File.md)
- [L3 – Lab to Instantiate Data Memory to the CPU](day5/61-RV_D5SK3_L3_Lab_to_Instantiate_Data_Memory_to_the_CPU.md)
- [L4 – Lab to Add Stores and Loads to the Test Program](day5/62-RV_D5SK3_L4_Lab_to_Add_Stores_and_Loads_to_the_Test_Program.md)
- [L5 – Lab to Add Control Logic for Jump Instructions](day5/63-RV_D5SK3_L5_Lab_to_Add_Control_Logic_for_Jump_Instructions.md)
- [L6 – Wrap-Up](day5/64-RV_D5SK3_L6_WrapUp.md)

---

## Project: GEMM on RVMYTH

- [GEMM project guide, C program, converter and test program](project/gemm/README.md)

---

## MakerChip Link, Files and Screenshots

- **Makerchip project:** _paste your shared Makerchip URL here_
- **TL-Verilog source:** [src/RISC-V_CPU.tlv](src/RISC-V_CPU.tlv)
- **Compiled Verilog (optional):** add `src/Pipelined_RV32I_CPU_Core.v`

### Block Diagram

<!-- ![Block Diagram](images/BlockDiagram.png) -->

### Visualization

<!-- ![Viz](images/Viz.png) -->

### Waveforms

<!-- ![Waveform 1](images/Waveform1.png) -->
<!-- ![Waveform 2](images/Waveform2.png) -->

### TL-Verilog Code

<!-- ![TLV 1](images/tlv1.png) -->

## Acknowledgements

- Kunal Ghosh – VLSI System Design (VSD)
- Steve Hoover – Redwood EDA (TL-Verilog, Makerchip)
- NASSCOM
