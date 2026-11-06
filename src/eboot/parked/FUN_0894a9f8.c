/* FUN_0894a9f8: invalidate matching live entries after a record-state change.
 * Main EBOOT, attempt-high-01 241-512 byte batch 18. Record roles are hypotheses. */
typedef unsigned char u8;
typedef unsigned int u32;

extern u8 *D_09da9600;

int FUN_08949d68(void *, int);

void FUN_0894a9f8(u8 *state, u8 *record)
{
    short id = *(short *)(record + 6);
    u8 value = record[4];
    int index = FUN_08949d68(state, id);
    u8 *entry;
    int count;

    if (index == -1) {
        return;
    }
    entry = state + 0x78 + index * 0xc;
    if ((signed char)entry[5] == value) {
        return;
    }
    count = 0;
    for (entry = D_09da9600 + 0x130; count != 6; count++, entry += 0x30) {
        if (*(short *)(entry + 0x20) == id) {
            *(u32 *)(entry + 0x14) &= ~2U;
        }
    }
    entry = state + 0x78 + index * 0xc;
    entry[5] = value;
}
