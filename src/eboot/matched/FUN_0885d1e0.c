/* Purpose: sum three optional table values selected by halfword identifiers. */
extern unsigned char D_089caf8c[];

int FUN_0885d1e0(unsigned int unused, const unsigned short *record)
{
    struct ValueRecord {
        unsigned char unknown[12];
        int value;
        unsigned char padding[4];
    };
    int total = 0;
    int index;
    (void)unused;
    if (record[1] != 0) {
        for (index = 0; index != 3; index++) {
            unsigned short identifier = record[index + 3];
            if (identifier != 0)
                total += ((struct ValueRecord *)D_089caf8c)[identifier].value;
        }
    }
    return total;
}
