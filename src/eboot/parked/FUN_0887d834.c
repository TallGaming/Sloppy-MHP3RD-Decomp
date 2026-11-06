/* Purpose: clear one indexed short pair and report its prior state. */
extern unsigned char *D_08aace80;

unsigned int FUN_0887d834(unsigned int unused, short index)
{
    struct Pair { short key; short value; };
    struct Pair *record = &((struct Pair *)(D_08aace80 + 0x5014))[index];
    unsigned int result = 2;
    (void)unused;
    if (index < 0x18) {
        record->value = 0;
        result = 0;
        if (record->key != 0) {
            record->key = 0;
            result = 1;
        }
    }
    return result;
}
