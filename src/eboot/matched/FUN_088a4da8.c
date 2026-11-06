/*
 * FUN_088a4da8: test whether a byte field is one of three accepted values.
 *
 * Main EBOOT, G2 leaf-with-branches matching. Names and types are hypotheses.
 */

typedef unsigned char u8;

int FUN_088a4da8(u8 *record)
{
    u8 value = record[0x479];
    int accepted;

    if (value == 11) {
        accepted = 1;
    } else {
        accepted = 0;
        if (value == 9 || value == 15) {
            accepted = 1;
        }
    }
    return accepted;
}
