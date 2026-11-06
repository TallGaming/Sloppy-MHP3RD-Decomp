/*
 * FUN_0890d538: call FUN_08902e04 on the part at 0x21C with D_08a0382c and 1.
 *
 * Main EBOOT, match slice 4 (tiny functions with global data). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern const u8 D_08a0382c; /* Hypothesis: type from the access only. */
void FUN_08902e04(void *part, const void *data, s32 flag);

void FUN_0890d538(void *rec)
{
    FUN_08902e04((u8 *)rec + 0x21c, &D_08a0382c, 1);
}
