/*
 * Purpose: copy a fixed initialization block from shared state.
 * Hypothesis: the global at 0x09bf5250 contains the source base pointer.
 *
 * Attempt 1: four explicit word copies preserve the data range, but GCC turns
 * the pointer-end loop into a count-down loop.
 * Attempt 2: a four-word structure assignment gives the intended copy shape,
 * but retains the count-down loop and different copy scheduling.
 *
 * Blockers: the source-base global has no recovered symbol, and GCC strength-
 * reduces the pointer-end loop that the reference retains. Revisit with a
 * matching large-copy source shape or a supported code-generation change.
 */
typedef unsigned int u32;

typedef struct FourWords {
    u32 word[4];
} FourWords;

extern unsigned char *D_09bf5250;

void FUN_0882ddc0(u32 *destination) {
    FourWords *source = (FourWords *)(D_09bf5250 + 0x255C);
    FourWords *end = (FourWords *)(D_09bf5250 + 0x287C);
    FourWords *output = (FourWords *)destination;

    while (source != end) {
        *output++ = *source++;
    }
    {
        u32 *tail_source = (u32 *)source;

        destination = (u32 *)output;
        *destination++ = *tail_source++;
        *destination++ = *tail_source++;
        *destination = *tail_source;
    }
}
