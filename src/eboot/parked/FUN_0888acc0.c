/* Purpose: synchronize cached multiplayer profiles and service pending updates. */
extern void FUN_0882e570(void);
extern void FUN_08886c50(void *);
extern void FUN_08887b58(void *);
extern unsigned char *FUN_08885024(void *);
extern int FUN_0880bff4(const void *, const void *, unsigned int);
extern void FUN_08888074(void *);
extern void FUN_08888824(void *);
extern void FUN_088c926c(void *);

static void copy_profile_cache(unsigned char *context)
{
    int slot;
    int i;

    for (slot = 0; slot < 4; slot++) {
        unsigned char *source = context + 0x818 + slot * 332;
        unsigned char *destination = context + 0xd48 + slot * 332;
        for (i = 0; i < 332; i++)
            destination[i] = source[i];
    }
}

void FUN_0888acc0(void *value)
{
    unsigned char *context = value;
    unsigned char state;
    unsigned char *identity;

    if (context == 0 || context[4] == 0)
        return;

    state = context[0x1bcd];
    context[0x17b0] = context[0x17af];

    if (state < 1 || state > 5) {
        copy_profile_cache(context);
        FUN_0882e570();
    }

    if (context[0x24f0])
        FUN_08886c50(context + 0x24f0);
    if (context[0x2518])
        FUN_08887b58(context + 0x2518);
    if (context[0x2538])
        FUN_08887b58(context + 0x2538);

    identity = FUN_08885024(context);
    switch (state) {
    case 1:
    case 2:
        if (FUN_0880bff4(context + 0x818, identity, 6) == 0)
            FUN_08888074(context);
        break;
    case 3:
    case 4:
        if (FUN_0880bff4(context + 0xd48, identity, 6) == 0)
            FUN_08888824(context);
        break;
    case 5:
        FUN_088c926c(context);
        break;
    default:
        break;
    }
}
