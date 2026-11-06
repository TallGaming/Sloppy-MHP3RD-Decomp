/* Emit the pending command range and release its descriptor. */
typedef unsigned char u8;
typedef unsigned int u32;

struct PendingRange08856594 {
    u8 prefix[0x180];
    u8 pending;
    u8 slot;
    u8 alignment[2];
    u32 first;
};

extern void *D_08aaceb8;
extern u32 D_08a31e88;
extern void FUN_088756e8(void *state, u32 first, int words, int slot);
extern void FUN_08875870(void *state, int next);

void FUN_08856594(struct PendingRange08856594 *range)
{
    if (range->pending) {
        u32 end = D_08a31e88;
        int words = (int)(end - range->first) >> 2;

        if (words != 0) {
            D_08a31e88 += 8;
            FUN_088756e8(D_08aaceb8, range->first, words + 2, range->slot);
            FUN_08875870(D_08aaceb8, (int)D_08a31e88);
        }
        range->pending = 0;
        range->first = 0;
    }
}

