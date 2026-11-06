/*
 * FUN_088a8b0c: return a record byte when a predicate succeeds.
 *
 * Main EBOOT, G2 frame-plus-branches matching. Names and types are hypotheses.
 */

typedef unsigned char u8;

int FUN_088a0464(void *record);

u8 FUN_088a8b0c(u8 *record)
{
    u8 result = 0;

    if (FUN_088a0464(record) != 0) {
        result = record[0x1412];
    }
    return result;
}
