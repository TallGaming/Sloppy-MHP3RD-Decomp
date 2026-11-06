/* FUN_08902688: advance descriptor interpolation indices by one tick.
 * Main EBOOT, attempt-high-01 513-1024 byte batch 1. Track roles are hypotheses. */
void FUN_08901db0(void *);

int FUN_08902688(int *record, char restart)
{
    int *descriptor;
    int *table;
    int index;
    int tick;

    FUN_08901db0(record);
    if (record[1] <= record[0]) {
        if (restart == 0) {
            return 1;
        }
        record[6] = 0;
        record[0] = 0;
        record[2] = 0;
        record[3] = 0;
        record[4] = 0;
        record[5] = 0;
        return 1;
    }
    descriptor = (int *)record[0x12];
    tick = record[0] + 1;
    record[0] = tick;
    if (descriptor != 0) {
        table = (int *)descriptor[1];
        if (table != 0 && *(int *)(table[1] + record[2] * 8 + 8) <= tick &&
            record[2] < table[0] - 1) {
            record[2]++;
        }
        table = (int *)descriptor[2];
        index = record[3];
        if (table != 0 && *(int *)(table[1] + index * 8 + 8) <= record[0] &&
            index < table[0] - 1) {
            record[3] = index + 1;
        }
        table = (int *)descriptor[3];
        index = record[4];
        if (table != 0 && *(int *)(table[1] + index * 12 + 12) <= record[0] &&
            index < table[0] - 1) {
            record[4] = index + 1;
        }
        table = (int *)descriptor[4];
        index = record[5];
        if (table != 0 && *(int *)(table[1] + index * 12 + 12) <= record[0] &&
            index < table[0] - 1) {
            record[5] = index + 1;
        }
        table = (int *)descriptor[5];
        index = record[6];
        if (table != 0 && *(int *)(table[1] + index * 8 + 8) <= record[0] &&
            index < table[0] - 1) {
            record[6] = index + 1;
        }
    }
    return 0;
}
