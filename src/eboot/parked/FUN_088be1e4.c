/*
 * FUN_088be1e4: test global state flags and a signed record level.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: the code shape matches but the global base lacks a symbol.
 */

typedef unsigned char u8;
typedef unsigned int u32;
typedef signed char s8;

extern u8 *D_08abce80;

int FUN_088be1e4(u8 *record)
{
    u32 flags = *(u32 *)(D_08abce80 + 0x60474);

    if ((flags & 0x200) != 0 && (s8)record[0x21b4] < 3 &&
        (flags & 4) == 0) {
        return 1;
    }
    return 0;
}
