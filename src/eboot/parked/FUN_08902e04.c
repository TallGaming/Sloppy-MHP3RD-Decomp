/* FUN_08902e04: initialize a record from an optional descriptor and copy its transform.
 * Main EBOOT, attempt-high-01 241-512 byte exhaustion audit. Field roles are hypotheses. */
typedef unsigned char u8;

void FUN_08901db0(void *);

static int last_key(int *table, int stride)
{
    return *(int *)(table[0] * stride + table[1] - stride);
}

void FUN_08902e04(int *record, int *descriptor, char copy_transform)
{
    int value;
    int *table;
    int i;

    record[0x12] = (int)descriptor;
    record[0] = 0;
    record[1] = 0;
    if (descriptor != 0) {
        table = (int *)descriptor[1];
        if (table != 0) {
            record[1] = last_key(table, 8);
        }
        table = (int *)descriptor[2];
        if (table != 0) {
            value = last_key(table, 8);
            if (record[1] < value) record[1] = value;
        }
        table = (int *)descriptor[3];
        if (table != 0) {
            value = last_key(table, 12);
            if (record[1] < value) record[1] = value;
        }
        table = (int *)descriptor[4];
        if (table != 0) {
            value = last_key(table, 12);
            if (record[1] < value) record[1] = value;
        }
        table = (int *)descriptor[5];
        if (table != 0) {
            value = last_key(table, 8);
            if (record[1] < value) record[1] = value;
        }
        if (copy_transform != 0) {
            int *transform = (int *)descriptor[0];
            record[0x11] = descriptor[0];
            for (i = 0; i != 9; i++) {
                record[8 + i] = transform[i];
            }
        }
    }
    record[2] = 0;
    record[3] = 0;
    record[4] = 0;
    record[5] = 0;
    record[6] = 0;
    ((u8 *)record)[0x1c] = 0;
    FUN_08901db0(record);
}
