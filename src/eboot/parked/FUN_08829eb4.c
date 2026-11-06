typedef unsigned char u8;

/*
 * Purpose hypothesis: copy three source floats and a shared fourth value.
 *
 * Parked after direct stores and two local-value orderings. The closest draft
 * has the right fields and store offsets but assigns the shared value and the
 * third source field to the opposite float registers. Its external data symbol
 * D_089651ac also still needs an absolute declaration in symbols.s. Revisit
 * when a source layout that preserves this float register allocation is found.
 */
extern float D_089651ac;

void FUN_08829eb4(const void *source, float *output)
{
    float fourth = D_089651ac;
    float first = *(const float *)((const u8 *)source + 3744);
    float second = *(const float *)((const u8 *)source + 3748);
    float third = *(const float *)((const u8 *)source + 3752);

    output[0] = first;
    output[3] = fourth;
    output[1] = second;
    output[2] = third;
}
