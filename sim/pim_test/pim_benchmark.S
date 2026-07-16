# =============================================================================
# pim_benchmark.S -- 2D Image Processing Kernel (Vertical Blur)
# =============================================================================

# PIM_ADD_P rd, rs1, imm1, imm2
.macro PIM_ADD_P rd, rs1, imm1, imm2
    .word (0x03) | (\rd << 7) | (0 << 12) | (\rs1 << 15) | (\imm1 << 20) | (\imm2 << 26)
.endm

    .global _start
_start:
    li x5, 0x20000000       # x5 = Base Address for 2D Image
    li x6, 0x20001000       # x6 = Write Address (Standard)
    li x7, 0x20002000       # x7 = Write Address (PIM)
    
    # We will process 4 complete rows of a 16-pixel wide image tile (64 pixels total)
    li x8, 64               

    # =========================================================================
    # BENCHMARK 1: Standard RISC-V 2D Vertical Filter
    # =========================================================================
    mv x9, x5               # Read Pointer
    mv x10, x6              # Write Pointer
    mv x11, x8              # Loop Counter
    
    rdcycle x20             # Start Timer (Standard)

std_loop:
    # 1. Load the current pixel
    lw   x12, 0(x9)         
    
    # 2. Load the pixel directly BELOW it. 
    # Since width = 16 words, the byte offset is 16 * 4 = 64 bytes.
    lw   x13, 64(x9)        

    # 3. Sum and Average
    add  x14, x12, x13      
    srai x14, x14, 1        # Divide by 2
    
    sw   x14, 0(x10)        # Store Smoothed Pixel

    addi x9, x9, 4          # Move right by one pixel
    addi x10, x10, 4        
    addi x11, x11, -1       
    bnez x11, std_loop      

    rdcycle x21             # End Timer (Standard)
    sub x22, x21, x20       # x22 = Total Standard Cycles

    # =========================================================================
    # BENCHMARK 2: PIM-Accelerated 2D Vertical Filter
    # =========================================================================
    mv x9, x5               # Reset Read Pointer
    mv x10, x7              # Reset Write Pointer
    mv x11, x8              # Reset Loop Counter

    rdcycle x20             # Start Timer (PIM)

pim_loop:
    # Look at this magic! We tell the SRAM to add word offset 0 to word offset 16.
    # The SRAM dual-ports grab Pixel[x,y] and Pixel[x,y+1] simultaneously!
    PIM_ADD_P 14, 9, 0, 16   
    
    srai x14, x14, 1        # Divide by 2
    sw   x14, 0(x10)        # Store Smoothed Pixel

    addi x9, x9, 4          # Move right by one pixel
    addi x10, x10, 4        
    addi x11, x11, -1       
    bnez x11, pim_loop      

    rdcycle x21             # End Timer (PIM)
    sub x23, x21, x20       # x23 = Total PIM Cycles

    # =========================================================================
    # Write Results to SRAM
    # =========================================================================
    li x5, 0x20000000
    sw x22, 100(x5)         # SRAM[word 25] = Standard Cycles
    sw x23, 104(x5)         # SRAM[word 26] = PIM Cycles

    li x12, 0xDEAD
    sw x12, 108(x5)         # Done Sentinel

done_loop:
    j done_loop