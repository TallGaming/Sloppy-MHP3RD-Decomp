/* FUN_0894f760: report whether the bounded resource table is fully occupied.
 * Main EBOOT, attempt-high-01 241-512 byte batch 20. Table roles are hypotheses. */
typedef unsigned char u8;
typedef unsigned int u32;

extern u8 *D_08aace80;
extern void *D_09e5e1a8;
short FUN_08867704(void *);
void FUN_09c9abb4(void *, int, int);

int FUN_0894f760(u8 *state)
{
    short limit;
    u8 *entry = D_08aace80 + 0x4844;
    int empty = 0;
    int index = 0;

    for (;;) {
        limit = FUN_08867704(D_08aace80) + 3;
        if (limit > 5) {
            limit = 5;
        }
        if (index >= limit * 100) {
            break;
        }
        index++;
        empty += *(short *)(entry + 2) == 0;
        entry += 4;
    }
    if (empty != 0) {
        return 0;
    }
    if (((*(u32 *)(state + 0x4b14) ^ 1) & 1) != 0) {
        FUN_09c9abb4(D_09e5e1a8, 0x19, 0);
        *(u32 *)(state + 0x4b14) |= 1;
    }
    return 1;
}
