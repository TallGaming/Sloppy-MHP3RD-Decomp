/*
 * FUN_088bf400: copy three bytes into a record field.
 *
 * Main EBOOT, G2 leaf-with-branches matching. Names and types are hypotheses.
 */

typedef unsigned char u8;

void FUN_088bf400(u8 *record, const u8 *source)
{
    int index = 0;

    do {
        u8 value = *source;
        index++;
        source++;
        record[0x21e5] = value;
        record++;
    } while (index != 3);
}
