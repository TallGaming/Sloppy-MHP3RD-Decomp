/*
 * Purpose: advance the shared controller once: poll its input source, refresh
 * registered handles, then submit or retire controller records.
 *
 * UNCOMPILED recovery draft.  This target is 3340 bytes / 835 instructions
 * and contains 49 direct calls across 25 backward edges.  It is intentionally
 * not named as the production symbol and must not be registered.  The draft
 * records only relationships supported by the target's direct-call sequence
 * and the three recovered controller helpers; its device-poll descriptor and
 * first dispatch path are still incomplete.
 *
 * Evidence for ownership: both known direct callers invoke this with no
 * arguments after FUN_08828be0(), while the body derives its controller from
 * D_08a20fec and calls FUN_088271ac/FUN_08827988/FUN_088285f4 with that same
 * base.  Thus this is game controller code, not a library candidate.
 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef int s32;

struct Controller_08828e64 {
    u8 unknown_00[8];
    s32 handles_08[6];
    u8 unknown_20[2];
    u8 handle_count_22;
    u8 selected_23;
    u8 unknown_24[0x68 - 0x24];
    u8 state_68[6];
    u8 unknown_6e[0x190 - 0x6e];
};

struct OutputBuffer_08828e64 {
    s32 used;
    s32 capacity;
    u8 *data;
};

extern struct Controller_08828e64 *D_08a20fec;
extern s32 FUN_0887a7e4(s32 handle, u16 *result);
extern s32 FUN_088287c8(void);
extern void FUN_08826d60(struct Controller_08828e64 *controller,
                         unsigned int index, unsigned int state);
extern void FUN_088271ac(struct Controller_08828e64 *controller,
                         void *output, s32 mode);
extern void FUN_08827988(struct Controller_08828e64 *controller,
                         struct OutputBuffer_08828e64 *output);
extern s32 FUN_08827e28(struct Controller_08828e64 *controller,
                         unsigned int index);
extern s32 FUN_088285f4(struct Controller_08828e64 *controller);
extern void FUN_08827944(struct Controller_08828e64 *controller);

/* This is a deliberately bounded, supported middle/end fragment.  The
 * unresolved first dispatch precedes it and may select a different state
 * transition for the selected handle. */
static void process_refresh_fragment_08828e64(struct Controller_08828e64 *controller)
{
    /* This adjacent call triple is direct evidence: the first FUN_08827e28
     * invocation is passed index 1; on its successful path the target feeds
     * controller +0x19c to FUN_088271ac in mode 1, then consumes the output
     * view at controller +0x190.  The unknown surrounding predicates are not
     * replaced with a guessed loop. */
    if (controller->handle_count_22 > 1 &&
        controller->handles_08[1] >= 0 &&
        FUN_08827e28(controller, 1) != 0) {
        FUN_088271ac(controller, (u8 *)controller + 0x19c, 1);
        FUN_08827988(controller,
                     (struct OutputBuffer_08828e64 *)((u8 *)controller + 0x190));
    }

    /* The remaining body has two further FUN_08827e28 sites, two
     * FUN_088285f4 sites, and one FUN_08827944 site, interleaved with calls
     * that publish states 2/3/6.  Do not infer their order from this partial;
     * the missing poll/result descriptor controls those branches. */
}

void FUN_08828e64_partial(void)
{
    struct Controller_08828e64 *controller = D_08a20fec;

    if (controller == 0)
        return;

    process_refresh_fragment_08828e64(controller);
}
