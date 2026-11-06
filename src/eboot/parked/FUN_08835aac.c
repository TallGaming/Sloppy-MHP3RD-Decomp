/*
 * Purpose: partial readable control-flow view for FUN_08835aac.
 *
 * The state-field address and final forwarding path are supported by a
 * synthetic artificial-state probe.  The two unresolved callees lack proven
 * declarations, so this is deliberately not a whole compiled candidate.
 */
typedef unsigned char u8;
typedef unsigned int u32;

struct GlobalState_09bf5250 {
    u8 unknown_000[0x366];
};

extern struct GlobalState_09bf5250 *D_09bf5250;
extern void FUN_08839fd4(int value); /* verified state-store interface */
extern void FUN_0883a740(void *field_366); /* callable ABI unresolved */
extern u32 FUN_08839f10(void *context, int zero1, int zero2); /* return type unresolved */

u32 FUN_08835aac(void *context)
{
    FUN_08839fd4(2);
    FUN_0883a740(&D_09bf5250->unknown_000[0x366]);
    return FUN_08839f10(context, 0, 0);
}
