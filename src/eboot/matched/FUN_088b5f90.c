/*
 * FUN_088b5f90: notify a global context when an indexed slot is occupied.
 *
 * Main EBOOT, G2 leaf-with-branches matching. Names and types are hypotheses.
 */

typedef unsigned char u8;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

extern void *D_08a31e84;
void FUN_08855564(void *context, u32 value);

void FUN_088b5f90(u8 *record, u8 index)
{
    void *slot = FIELD(record, void *, 0x08 + index * 4);
    u32 value = index + 12;

    if (slot != 0) {
        FUN_08855564(D_08a31e84, value);
    }
}
