/* Purpose: add an item quantity to matching or empty inventory slots. */
extern int D_08ab1568;
extern int FUN_088677a4(void *);
extern void FUN_0887d7cc(int, unsigned int);
extern signed char D_089caf8e[];

unsigned int FUN_0886b100(unsigned char *state, unsigned short item,
                          unsigned int quantity, unsigned short preferred,
                          char clamp, unsigned short *slot_out)
{
    int count = FUN_088677a4(state);
    unsigned int maximum = D_089caf8e[item * 20] == -1 ? 0xff : 99;
    unsigned short *slots = (unsigned short *)(state + 0x38a4);
    int i;

    quantity &= 0xffff;
    if (clamp == 1 && quantity > maximum)
        quantity = maximum;
    if (preferred != 0xffff && preferred < count && slots[preferred * 2] == item) {
        unsigned int room = maximum - (short)slots[preferred * 2 + 1];
        FUN_0887d7cc(D_08ab1568, item);
        if (slot_out != 0) *slot_out = preferred;
        if (quantity <= room) {
            slots[preferred * 2 + 1] += quantity;
            return 0;
        }
        slots[preferred * 2 + 1] = maximum;
        quantity -= room;
    }
    for (i = 0; i < count && quantity != 0; i++) {
        unsigned short *slot = slots + i * 2;
        if (slot[0] == item && (short)slot[1] < (int)maximum) {
            unsigned int room = maximum - (short)slot[1];
            if (slot_out != 0) *slot_out = i;
            FUN_0887d7cc(D_08ab1568, item);
            if (quantity <= room) {
                slot[1] += quantity;
                return 0;
            }
            slot[1] = maximum;
            quantity -= room;
        }
    }
    for (i = 0; i < count && quantity != 0; i++) {
        unsigned short *slot = slots + i * 2;
        if (slot[0] == 0) {
            if (slot_out != 0) *slot_out = i;
            FUN_0887d7cc(D_08ab1568, item);
            slot[0] = item;
            slot[1] = quantity <= maximum ? quantity : maximum;
            if (quantity <= maximum)
                return 0;
            quantity -= maximum;
        }
    }
    return quantity;
}
