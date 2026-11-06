/*
 * Purpose: retain a non-candidate arithmetic classification for FUN_0881a380.
 *
 * Its no-call control flow uses repeated unsigned divide/trap sequences and
 * variable shifts.  The primary GCC 4.0.4 libgcc2.c source provides a close
 * structural lead: __udivdi3 inlines __udivmoddi4 for two UDWtype operands.
 * The entry/return ABI and exact configuration/whole-interval provenance are
 * unresolved; this is not a target implementation or library classification.
 */
#include <stdint.h>

typedef struct FUN_0881a380_U64Words {
    uint32_t low;
    uint32_t high;
} FUN_0881a380_U64Words;

/* ABI hypothesis only: MIPS o32 would pass two UDWtype values in a0-a3. */
extern uint64_t FUN_0881a380(uint64_t numerator, uint64_t denominator);
