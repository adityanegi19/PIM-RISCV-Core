/* =============================================================================
 * link.ld  --  Linker script for CV32E40P PIM Extension Test
 * =============================================================================
 *
 * Memory map:
 *   IMEM  0x00000000  64 KB   Instruction memory (read-only executable)
 *   SRAM  0x20000000   1 MB   Data SRAM (matches pim_sram_subsystem base addr)
 *
 * Stack:
 *   _stack_top = 0x2000FFFC  (top of lower 64 KB of SRAM, 4-byte aligned)
 *
 * Note: .data is NOT loaded from ROM.  The SRAM is initialised at runtime by
 * the assembly sw instructions; the testbench does not need a load-address VMA
 * split.  This matches a simulation-only environment.
 * ============================================================================= */

OUTPUT_ARCH(riscv)
ENTRY(_start)

MEMORY {
    IMEM (rx)  : ORIGIN = 0x00000000, LENGTH = 64K
    SRAM (rwx) : ORIGIN = 0x20000000, LENGTH = 1M
}

SECTIONS {

    /* -------------------------------------------------------------------------
     * .text — all code and read-only data, placed in instruction memory
     * ---------------------------------------------------------------------- */
    .text : {
        KEEP(*(.text.init))
        *(.text*)
        *(.rodata*)
        . = ALIGN(4);
    } > IMEM

    /* -------------------------------------------------------------------------
     * .data — initialised data, placed directly in SRAM
     * (SRAM is simulation-initialised; no ROM-to-RAM copy needed)
     * ---------------------------------------------------------------------- */
    .data : {
        . = ALIGN(4);
        *(.data*)
        . = ALIGN(4);
    } > SRAM

    /* -------------------------------------------------------------------------
     * .bss — zero-initialised data, placed in SRAM after .data
     * ---------------------------------------------------------------------- */
    .bss : {
        . = ALIGN(4);
        *(.bss*)
        *(COMMON)
        . = ALIGN(4);
    } > SRAM

    /* -------------------------------------------------------------------------
     * Stack pointer symbol — top of lower 64 KB of SRAM (word-aligned)
     * ---------------------------------------------------------------------- */
    _stack_top = ORIGIN(SRAM) + 0xFFFC;   /* 0x2000FFFC */
    PROVIDE(__stack_top = _stack_top);

    /* -------------------------------------------------------------------------
     * Discard debug / exception-handling sections not needed for simulation
     * ---------------------------------------------------------------------- */
    /DISCARD/ : {
        *(.comment)
        *(.note*)
        *(.eh_frame*)
    }
}
