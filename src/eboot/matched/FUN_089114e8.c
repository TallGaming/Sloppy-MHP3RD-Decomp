typedef unsigned char u8;

/* Purpose hypothesis: extract two adjacent float fields. */
void FUN_089114e8(const void *source, float *first, float *second)
{
    *first = *(const float *)((const u8 *)source + 104);
    *second = *(const float *)((const u8 *)source + 108);
}
