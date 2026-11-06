/* Install one or all five packed action descriptors and refresh enabled slots. */
typedef unsigned char u8; typedef unsigned int u32;
struct PackedWord { u32 value; } __attribute__((packed));
void FUN_088a4548(u8 *, u32 *, u32 *);
void FUN_088a4568(u8 *owner, struct PackedWord *src, u8 index)
{
    int i;
    if (index != 0xff) {
        u32 *dst = (u32 *)(owner + 0x13f0 + index * 4);
        *dst = src->value;
        if ((*dst & 1) == 0)
            FUN_088a4548(owner, dst, (u32 *)(owner + 0x460 + index * 4));
        return;
    }
    for (i = 0; i != 5; i++) {
        u32 *dst = (u32 *)(owner + 0x13f0 + i * 4);
        *dst = src[i].value;
        if ((*dst & 1) != 0)
            continue;
        FUN_088a4548(owner, dst, (u32 *)(owner + 0x460 + i * 4));
    }
}
