/* Copy a NUL-terminated string, using aligned 32-bit transfers when safe. */
typedef unsigned int u32;

char *FUN_0880e654(char *destination, const char *source)
{
    char *result = destination;
    char *dst = destination;
    const char *src = source;
    u32 *word_dst;
    const u32 *word_src;

    if ((((u32)src | (u32)dst) & 3) == 0) {
        word_dst = (u32 *)dst;
        word_src = (const u32 *)src;
        while (((*word_src + 0xfefefeffU) & ~*word_src & 0x80808080U) == 0)
            *word_dst++ = *word_src++;
        dst = (char *)word_dst;
        src = (const char *)word_src;
    }
    while ((*dst++ = *src++) != '\0')
        ;
    return result;
}
