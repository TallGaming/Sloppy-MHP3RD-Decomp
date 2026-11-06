/*
 * FUN_08902fc0: initialize a header and a variable number of 0x14-byte child records.
 *
 * Main EBOOT, attempt-high-01 medium batch 2. Global table and child layouts are hypotheses.
 */

typedef unsigned char u8;
typedef unsigned int u32;
void FUN_08902e04(void *child, void *source, int value);

void FUN_08902fc0(u8 *record, void *table, u8 mode)
{
    int count, index;
    *(void **)record = table; record[0x0c] = mode; *(u32 *)(record + 4) = *(u8 *)0x089fcc4c;
    count = *(u8 *)0x089fcc4d; if (count == 0) return;
    record += 0x10; index = 0;
    do {
        FUN_08902e04(record, (void *)(0x089f947c + *(u8 *)(0x089fcc48 + index) * 0x18), 1);
        index++; record += 0x14;
    } while (index < count);
}
