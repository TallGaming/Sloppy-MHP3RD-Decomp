/*
 * FUN_0883ece0: partial field and dispatch view.
 *
 * This deliberately uncompiled view records only effects independently
 * recovered from the target and its direct caller.  It is not a whole C
 * candidate: five direct callees have no verified ABI and three callback
 * signatures remain unresolved.
 */
typedef unsigned char u8;
typedef short s16;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

struct ObjectDispatch {
    u8 pad_000[0xf8];
    void *callback_f8;
    void *callback_fc;
    void *callback_100;
};

/* The entry uses only its first two GPR argument slots before overwriting
 * temporaries.  The second pointer owns the observed fields. */
void FUN_0883ece0_partial_view(void *context, u8 *object)
{
    s16 threshold_input = FIELD(object, s16, 0x5cc);
    struct ObjectDispatch *dispatch = *(struct ObjectDispatch **)object;

    /* Direct call order is 0883eac8, 088a627c, 088a7ebc, 088a7f60,
     * 0883eca0, then 0883eb6c.  The 088a7f60 call receives the short
     * loaded from object + 0x5cc in GPR5. */
    (void)context;
    (void)threshold_input;

    /* The byte at 0x5a8 receives the 088a7f60 return value. */
    /* 0xdd9, 0xdda and 0xddb are cleared byte state fields; 0xddc is a
     * cleared word state field. Calls are indirect through dispatch offsets
     * 0xf8 and 0xfc, followed by a terminal transfer through offset 0x100.
     * Their true callback prototypes and post-call field use require source
     * ABI evidence, so they are intentionally not invented here. */
    (void)dispatch;
}
