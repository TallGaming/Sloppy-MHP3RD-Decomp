/* Purpose: remove a requested quantity from one preferred slot or matching slots. */
extern unsigned char *D_08aace80;
extern signed char D_089caf8e[];
extern short FUN_088677a4(void *);

int FUN_0887dfcc(int unused, unsigned int item, short quantity, unsigned int preferred)
{
    unsigned char *state = D_08aace80;
    unsigned short *slots = (unsigned short *)(state + 0x38a4);
    int remaining = quantity;
    int count;
    int i;

    (void)unused;
    item &= 0xffff;
    if (remaining < 0 || item == 0 || D_089caf8e[item * 20] == -1)
        return 0;
    count = FUN_088677a4(state);
    preferred &= 0xffff;
    if (preferred != 0xffff) {
        unsigned short *slot = slots + preferred * 2;
        if (slot[0] != item || slot[1] == 0)
            return FUN_0887dfcc(unused, item, quantity, 0xffff);
        if ((short)slot[1] < remaining) {
            remaining -= (short)slot[1];
            slot[1] = 0;
        } else {
            slot[1] -= remaining;
            remaining = 0;
        }
        if ((short)slot[1] < 1) slot[0] = 0;
        if (remaining > 0)
            remaining = FUN_0887dfcc(unused, item, remaining, 0xffff);
        return remaining;
    }
    for (i = count - 1; i >= 0 && remaining > 0; i--) {
        unsigned short *slot = slots + i * 2;
        if (slot[0] == item) {
            if ((short)slot[1] < remaining) {
                remaining -= (short)slot[1];
                slot[1] = 0;
            } else {
                slot[1] -= remaining;
                remaining = 0;
            }
            if ((short)slot[1] < 1) slot[0] = 0;
        }
    }
    return remaining;
}
