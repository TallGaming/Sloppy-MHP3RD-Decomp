/* Purpose: add or adjust a staged item quantity in a 24-slot table. */
extern unsigned char *D_08aace80;
extern signed char D_089caf8e[];
extern int FUN_0887d7d8(int, unsigned int);
extern void FUN_0887d7cc(int, unsigned int);
extern void FUN_0887d834(int);

int FUN_0887d884(int context, unsigned short item, unsigned short change)
{
    unsigned char *state = D_08aace80;
    unsigned short *slots = (unsigned short *)(state + 0x5014);
    unsigned short *quantities = (unsigned short *)(state + 0x5014 + 0x38a4);
    unsigned int maximum = D_089caf8e[item * 20] == -1 ? 0xff :
                           (unsigned char)D_089caf8e[item * 20];
    int i;

    if (FUN_0887d7d8(context, item) == 0) {
        for (i = 0; i < 24; i++) {
            if ((short)slots[i * 2] == 0 && (short)change > 0) {
                quantities[i * 2] = item;
                quantities[i * 2 + 1] = (short)change < (short)maximum ? change : maximum;
                FUN_0887d7cc(context, item);
                return 0;
            }
        }
        return 5;
    }
    for (i = 0; i < 24; i++) {
        if (slots[i * 2] == item) {
            short total;
            if ((short)change < 0 && maximum == 0xff) return 1;
            total = (short)quantities[i * 2 + 1] + (short)change;
            quantities[i * 2 + 1] = total;
            if (total > 0) {
                if (total > (short)maximum) { quantities[i * 2 + 1] = maximum; FUN_0887d7cc(context, item); return 2; }
                FUN_0887d7cc(context, item);
                return 1;
            }
            FUN_0887d834(context);
            quantities[i * 2] = 0;
            quantities[i * 2 + 1] = 0;
            return 4;
        }
    }
    return 0;
}
