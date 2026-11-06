/* Purpose: scan a circular choice table for the next usable entry. */
extern unsigned char D_089ca178[];
extern int FUN_0887f468(int, int);
extern int FUN_0887dd58(int, int, int, int, int, int);

int FUN_0887f48c(int context, unsigned char *position, char direction,
                 short *first_out, short *second_out, int selector, int mode)
{
    unsigned char *order = (unsigned char *)FUN_0887f468(context, selector);
    unsigned int index = *position;
    short *choice;
    int result;
    int tries;
    int step = direction;

    if (step == 0) {
        choice = (short *)(D_089ca178 + order[index] * 4);
        result = FUN_0887dd58(context, choice[0], choice[1], mode, 0, 0);
        step = 1;
        if (result != 0) {
            *first_out = choice[0];
            *second_out = choice[1];
            return result;
        }
    }

    tries = 0x75;
    do {
        index = (short)(index + step);
        if ((int)index >= 0x75)
            index = 0;
        else if ((int)index < 0)
            index = 0x74;
        choice = (short *)(D_089ca178 + order[index] * 4);
        result = FUN_0887dd58(context, choice[0], choice[1], mode, 0, 0);
        if (result != 0) {
            *position = index;
            *first_out = choice[0];
            *second_out = choice[1];
            return result;
        }
        tries--;
    } while (tries != 0);
    return 0;
}
