/*
 * FUN_0894c8c4: compare a computed rating with the active threshold.
 *
 * Main EBOOT, attempt-high-01 medium batch 19. Rating and threshold roles are hypotheses.
 */
typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32;
extern void *D_09befbd4; extern unsigned char *D_08aace80; extern float D_0896a658;
u32 FUN_08943d58(void *, u8, u16);
int FUN_0894c8c4(int unused, u8 kind, u16 value)
{
    return (float)FUN_08943d58(D_09befbd4, kind, value) * D_0896a658 <= (float)*(int *)(D_08aace80 + 0x5d484);
}
