/* Purpose: collect nonempty item counts into compact three-short records. */
extern int D_08ab1568;
extern int FUN_0887d7d8(int, unsigned short);
extern int FUN_0887ea9c(int, unsigned short);

int FUN_0887f228(int unused, unsigned short *items, int count, short *output)
{
    int written = 0;
    int i;

    (void)unused;
    if (count < 1)
        return 0;
    i = 0;
    do {
        int first = FUN_0887d7d8(D_08ab1568, *items);
        int second = FUN_0887ea9c(D_08ab1568, *items);
        if (first + second > 0) {
            output[0] = *items;
            output[1] = (short)first;
            output[2] = (short)second;
            output += 3;
            written++;
        }
        items++;
        i++;
    } while (i != count);
    return written;
}
