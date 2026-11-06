/* Purpose: count enabled table entries accepted by the current filter mode. */
extern unsigned char *D_08aace80;
extern int D_09bb7a80;
extern unsigned char D_089caafe[];
extern void *FUN_088b51b8(int, unsigned char, int);
extern int FUN_0887dc6c(int, void *, int, int);

short FUN_08880020(int context, char mode)
{
    unsigned char *state = D_08aace80;
    unsigned char *entry;
    void *filter;
    short count = 0;

    filter = FUN_088b51b8(D_09bb7a80, state[0x26], 1);
    if (mode == 0) {
        mode = FUN_0887dc6c(context, filter, 0, 0) != 0 ? 2 : 1;
    }

    entry = D_089caafe;
    do {
        unsigned int bit = entry[0];
        if (((state[0x50f8 + (bit >> 3)] >> (bit & 7)) & 1) != 0) {
            if (mode == 1) {
                if (((entry[1] ^ 1) & 1) != 0)
                    count++;
            } else if (mode == 3) {
                if ((entry[1] & 1) != 0)
                    count++;
            } else {
                count++;
            }
        }
        entry += 10;
    } while (entry != D_089caafe + 1170);
    return count;
}
