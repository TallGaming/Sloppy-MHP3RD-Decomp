/*
 * Purpose: retain a non-candidate ABI and field view for FUN_08859584.
 *
 * The only declared caller forwards four integer argument lanes. The target
 * performs byte, halfword, and word accesses through values derived from
 * those lanes, then writes a multi-field result through a derived pointer.
 * The target also has a bounded conditional loop and signed arithmetic.
 * No source-level object type, argument ownership, or loop extent is proved.
 * This file deliberately declares no callable candidate.
 */
#include <stdint.h>

typedef struct Fun08859584UnresolvedOutput {
    uint8_t field_00;
    uint8_t field_01;
    uint16_t field_02;
    uint16_t field_04;
    uint16_t field_06;
    uint16_t field_08;
    uint16_t field_0a;
    uint16_t field_0c;
    uint16_t field_10;
    uint16_t field_14;
    uint16_t field_18;
} Fun08859584UnresolvedOutput;

typedef struct Fun08859584StateByte {
    uint8_t field_00;
    uint8_t unknown_01[8];
    int8_t field_09;
} Fun08859584StateByte;

typedef struct Fun08859584InputDescriptor {
    const void *field_00;
    uint8_t unknown_04[3];
    int8_t field_07;
} Fun08859584InputDescriptor;
