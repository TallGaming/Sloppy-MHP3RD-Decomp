/*
 * FUN_0887eff8: return the address of 20-byte entry INDEX in D_089caf8c.
 *
 * Main EBOOT, match slice 4 (tiny functions with global data). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

struct Entry_089caf8c
{
    u8 bytes[20];
};
extern struct Entry_089caf8c D_089caf8c[];

void *FUN_0887eff8(void *unused, s32 index)
{
    return &D_089caf8c[index];
}
