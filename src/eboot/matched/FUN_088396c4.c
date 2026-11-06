/* Purpose: count empty markers across 128 fixed-size global records. */
extern unsigned char *D_09bf5250;

int FUN_088396c4(void)
{
    int count = 0;
    int index = 0;
    unsigned char *record = D_09bf5250;
    do {
        count += record[0x2888] == 0;
        index++;
        record += 0x5b8;
    } while (index != 0x80);
    return count;
}
