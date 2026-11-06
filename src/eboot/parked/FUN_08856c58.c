/* Flush the old pending range and start a new one at the current render cursor. */
typedef unsigned char u8;
typedef unsigned int u32;

struct PendingRange08856c58 {
    u8 prefix[0x180];
    u8 pending;
    u8 slot;
    u8 alignment[2];
    u32 first;
};

extern void *D_08aaceb8;
extern u32 D_08a31e88;
extern void FUN_08856594(struct PendingRange08856c58 *range);
extern int FUN_0887585c(void *state);

int FUN_08856c58(struct PendingRange08856c58 *range, u8 slot)
{
    if (range->pending)
        FUN_08856594(range);

    D_08a31e88 = FUN_0887585c(D_08aaceb8);
    if (D_08a31e88 != 0) {
        range->pending = 1;
        range->slot = slot;
        range->first = D_08a31e88;
    }
    return range->pending != 0;
}

