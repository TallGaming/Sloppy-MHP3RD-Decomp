/*
 * FUN_0893dbe0: activate a record only when byte 10 is clear and flag bit 0 is clear.
 *
 * Main EBOOT, attempt-high-01 batch 3. The state and flag meanings are hypotheses.
 */

typedef unsigned char u8;
typedef unsigned int u32;

void FUN_0893dbe0(u8 *record)
{
    if (record[10] == 0 && (*(u32 *)(record + 4) & 1) == 0) {
        record[0x0b] = 4;
        record[10] = 1;
    }
}
