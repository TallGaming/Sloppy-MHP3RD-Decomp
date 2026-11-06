/*
 * FUN_089031fc: initialize a 0x60-byte record and raise its size from an optional table.
 *
 * Main EBOOT, attempt-high-01 medium batch 2. Record and table layouts are hypotheses.
 */

typedef unsigned char u8;
void FUN_08902e04(void *record, void *source, int value);

void FUN_089031fc(u8 *record, void *source, int *table)
{
    int candidate;
    FUN_08902e04(record, source, 1);
    *(int *)(record + 0x50)=0;
    *(int **)(record+0x54)=table;
    *(int *)(record+0x58)=0;
    *(int *)(record+0x5c)=0;
    if (table != 0) {
        candidate = *(int *)(table[1] + table[0] * 0x0c - 0x0c);
        if (*(int *)(record + 4) < candidate) *(int *)(record + 4) = candidate;
    }
}
