/*
 * FUN_0891f02c: update a six-byte state group when MODE is not -1.
 *
 * Main EBOOT, attempt-high-01 batch 2. The field meanings are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef unsigned short u16;

void FUN_0891f02c(u8 *record, u8 first, s8 mode, u16 value, u8 fifth, u8 sixth)
{
    record[0x1c8] = first;
    if (mode != -1) {
        record[0x1ca] = fifth;
        record[0x1c9] = mode;
        *(u16 *)(record + 0x1cc) = value;
        record[0x1cb] = sixth;
    }
}
