/*
 * FUN_088c89e0: count set flags returned by a subsystem query.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: the query global lacks a symbol and local scheduling differs.
 */

typedef unsigned char u8;
typedef unsigned int u32;

typedef struct QueryResult {
    u8 reserved[12];
    u32 flags;
} QueryResult;

extern void *D_09bb7e70;
void FUN_088c45d8(void *source, void *result);

int FUN_088c89e0(void)
{
    QueryResult result;
    u32 bit = 0;
    int count = 0;

    FUN_088c45d8(D_09bb7e70, &result);
    do {
        count += (result.flags & (1u << (bit & 31))) != 0;
        bit++;
    } while (bit != 32);
    return count;
}
