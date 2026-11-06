/* Purpose: find and optionally clear every occurrence of a short identifier in a fixed record table. */
extern unsigned char *D_08aace80;
extern void thunk_FUN_0880c468(void *, int, unsigned int);

int FUN_0886de8c(int unused, short identifier, unsigned int query_only)
{
    unsigned char *record = D_08aace80 + 0x53dc;
    int found = 0;
    int record_index;

    (void)unused;
    query_only &= 1;
    for (record_index = 0; record_index < 0x2d; record_index++, record += 0x5c) {
        int index;
        if (*(short *)(record + 0xe) == identifier) {
            unsigned char saved;
            if (query_only)
                return 1;
            saved = record[0xc];
            thunk_FUN_0880c468(record + 0xc, 0, 0x5c);
            record[0xc] = saved;
            *(short *)(record + 0xe) = -1;
            for (index = 0; index < 5; index++) {
                *(short *)(record + 0x10 + index * 2) = -1;
                record[0x1c + index * 4] &= 0x80;
                record[0x1d + index * 4] = 0xff;
                record[0x1e + index * 4] = 0xff;
                record[0x1f + index * 4] = 0xff;
            }
            *(short *)(record + 0x1a) = -1;
            found = 1;
        } else if (*(short *)(record + 0x1a) == identifier) {
            if (query_only)
                return 1;
            *(short *)(record + 0x1a) = -1;
            found = 1;
        } else {
            for (index = 0; index < 5; index++) {
                if (*(short *)(record + 0x10 + index * 2) == identifier) {
                    if (query_only)
                        return 1;
                    *(short *)(record + 0x10 + index * 2) = -1;
                    found = 1;
                    break;
                }
            }
        }
    }
    return found;
}
