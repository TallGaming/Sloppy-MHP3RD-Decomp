/*
 * FUN_088a1640: visit active nodes in one object-manager list.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: nested virtual-query loop lowers to a shorter, different frame.
 */

typedef unsigned char u8;
typedef unsigned int u32;
#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))
extern void *D_08a31e8c;
typedef int (*Query)(void *);
void FUN_08857710(void *, int, void *, u32);

void FUN_088a1640(u8 *manager, int list)
{
    u8 *node = FIELD(manager, u8 *, 0x28 + list * 4);

    for (;;) {
        if (node == 0) {
            return;
        }
        while (((Query)(*(void ***)node)[0x15])(node) == 0 ||
               (FIELD(node, u32, 4) & 4) != 0) {
            node = FIELD(node, u8 *, 0x54);
            if (node == 0) {
                return;
            }
        }
        FUN_08857710(D_08a31e8c, 6, node, (FIELD(node, u32, 4) & 0x0f) >> 3);
        node = FIELD(node, u8 *, 0x54);
    }
}
