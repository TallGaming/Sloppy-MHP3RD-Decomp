/*
 * FUN_08902b0c: activate one of two pairs of 0x50-byte subrecords.
 *
 * Main EBOOT, attempt-high-01 medium batch 2. Mode and subrecord roles are hypotheses.
 */

typedef unsigned char u8;
void FUN_08902688(void *record, int value);

void FUN_08902b0c(u8 *record)
{
    int mode = *(int *)(record + 0x140); int index;
    if (mode == 0) {
        index = 0; do { index++; FUN_08902688(record, 1); record += 0x50; } while (index != 2); return;
    }
    if (mode != 1) return;
    record += 0xa0; index = 0;
    do { index++; FUN_08902688(record, 1); record += 0x50; } while (index != 2);
}
