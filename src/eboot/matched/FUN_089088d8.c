/*
 * FUN_089088d8: apply the selected table entry, then reset the same manager.
 *
 * The manager and table layouts are hypotheses based on this access sequence.
 */
typedef unsigned char u8;
typedef unsigned int u32;

struct Entry089088d8 {
    u32 value00;
    u8 unknown04[8];
};

struct Manager089088d8;

extern int D_08a00198;
extern struct Entry089088d8 D_08a00174[];
extern struct Manager089088d8 D_09beb388;
extern void FUN_088fad30(struct Manager089088d8 *manager, u32 value);
extern void FUN_08902be4(struct Manager089088d8 *manager, int value);

void FUN_089088d8(void)
{
    FUN_088fad30(&D_09beb388, D_08a00174[D_08a00198 - 1].value00);
    FUN_08902be4(&D_09beb388, 0);
}
