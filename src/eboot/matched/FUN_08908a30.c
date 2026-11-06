/*
 * Purpose: initialize and populate a two-word result from source offsets
 * 0x60 and 0x64.
 * Hypothesis: the first input is the caller-provided result storage.
 */
typedef unsigned int u32;

typedef struct Pair {
    u32 first;
    u32 second;
} Pair;

Pair *FUN_08908a30(Pair *out, const void *source) {
    u32 first;
    u32 second;

    out->first = 0;
    out->second = 0;
    first = *(const u32 *)((const char *)source + 0x60);
    second = *(const u32 *)((const char *)source + 0x64);
    out->first = first;
    out->second = second;
    return out;
}
