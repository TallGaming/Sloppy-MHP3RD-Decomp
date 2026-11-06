/*
 * FUN_088e8628: copy a five-by-twenty tile block into a wrapped texture page.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: wrapped tile addressing remains one instruction longer and different.
 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

void FUN_088e8628(u8 *record, int page, int x, int y)
{
    u16 *source;
    int row;

    if (x < 0) {
        x += 3;
    }
    source = (u16 *)(record + 0x29630);
    row = 0;
    do {
        u32 raw_y = (u32)(row + y);
        u32 block_y = raw_y;
        int column = 0;
        u16 *item = source;
        if ((int)raw_y < 0) {
            block_y = raw_y + 7;
        }
        do {
            int raw_x = column + (x >> 2);
            int block_x = raw_x;
            if (raw_x < 0) {
                block_x = raw_x + 7;
            }
            *(u16 *)(record + page * 0x8000 + 0x29700 +
                     (((((block_x >> 3) + (block_y & 0xfffffff8)) * 8 +
                         (int)raw_y % 8) * 8 + raw_x % 8) * 2)) = *item;
            column++;
            item++;
        } while (column != 5);
        row++;
        source += 5;
    } while (row != 0x14);
}
