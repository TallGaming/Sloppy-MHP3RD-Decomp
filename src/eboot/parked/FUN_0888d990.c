/* Purpose: dispatch one of two indexed buffer operations, with a special case for slot two. */
extern unsigned int D_08a29198;
extern void FUN_0882b8d8(void *, unsigned int, void *, void *);
extern void FUN_0882ce7c(void *, unsigned int, void *, void *);

void FUN_0888d990(int unused, short slot)
{
    unsigned char *context = *(unsigned char **)0x089d0a10;
    int offset = slot * 0x10;

    (void)unused;
    if (slot == 2) {
        FUN_0882b8d8(context, D_08a29198, (void *)0x089d0a00, (void *)0x089d09d0);
        return;
    }
    FUN_0882ce7c(context, D_08a29198, (void *)(0x089d09e0 + offset),
                 (void *)(0x089d09b0 + offset));
}
