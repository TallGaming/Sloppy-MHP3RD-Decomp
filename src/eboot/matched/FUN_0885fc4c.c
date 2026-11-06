typedef unsigned char u8;
typedef int s32;

typedef struct Pair {
    s32 first;
    s32 second;
} Pair;

/*
 * Purpose hypothesis: copy the pair at offset 28 into an output pair.
 *
 * Read both input fields before overwriting the output. This preserves the
 * intended result when output aliases either input field.
 */
Pair *FUN_0885fc4c(Pair *output, void *unused, const void *source)
{
    output->first = 0;
    output->second = 0;
    {
        s32 first = *(const s32 *)((const u8 *)source + 28);
        s32 second = *(const s32 *)((const u8 *)source + 32);

        output->first = first;
        output->second = second;
    }
    return output;
}
