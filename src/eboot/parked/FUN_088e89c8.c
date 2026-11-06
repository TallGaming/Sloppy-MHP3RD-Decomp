/*
 * FUN_088e89c8: visit populated entries in a packed tile table.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: packed-table division loops remain longer and broadly different.
 */
typedef unsigned char u8;
typedef unsigned short u16;
void FUN_088e8708(u8 *, short, int, int, int);

void FUN_088e89c8(u8 *record)
{
    unsigned int limit = *(u16 *)(record + 0x11e);
    if (limit != 0) {
        short *entry = (short *)(record + 0x25678);
        int index = 0;
        do {
            for (;;) {
                short value = *entry++;
                int row;
                int column;
                int layer;
                if (value == 0) {
                    break;
                }
                row = index / record[0x11a];
                column = index % record[0x11a];
                layer = index / *(u16 *)(record + 0x11c);
                index++;
                FUN_088e8708(record, value, layer, column * record[0x118],
                             (row % record[0x11b]) * record[0x119]);
                limit = *(u16 *)(record + 0x11e);
                if ((int)limit <= index) {
                    return;
                }
            }
            index++;
        } while (index < (int)limit);
    }
}
