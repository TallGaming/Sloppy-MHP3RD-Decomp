/*
 * Purpose: Record the verified field and control-flow constraints of
 * FUN_088442b8 without claiming a whole callable C candidate.
 *
 * The routine conditionally traverses ten byte-selected entries beginning at
 * offset 0xbc0 from one input.  It builds a result mask from a callback and
 * sign-extends the mask's low 16 bits, and forwards it through a multi-slot
 * PSP EABI call.  The involved callee
 * prototypes are not independently verified, so this file is intentionally
 * an uncompiled field view rather than a diagnostic candidate.
 */
#include <stdint.h>

enum { FUN_088442B8_ENTRY_SELECTOR_OFFSET = 0x0bc0 };

struct FUN_088442b8_entry_view {
    uint8_t selector;
};

struct FUN_088442b8_table_view {
    uint8_t unknown_prefix[FUN_088442B8_ENTRY_SELECTOR_OFFSET];
    struct FUN_088442b8_entry_view entry[10];
};

extern void *D_08a3345c;
