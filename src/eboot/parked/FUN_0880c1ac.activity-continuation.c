/*
 * Purpose hypothesis: move a byte range while preserving overlapping input.
 *
 * The observed control flow selects a backward move only for destructive
 * overlap.  This readable candidate follows the public newlib generic
 * memmove structure, including its aligned forward fast path.  The target
 * has additional MIPS-specific unaligned and backward word-copy paths, so
 * this remains a parked reconstruction rather than an ownership claim.
 */
typedef unsigned int size_t;
typedef long Word;

#define UNALIGNED(left, right) \
    (((long)(left) & (sizeof(Word) - 1)) | \
     ((long)(right) & (sizeof(Word) - 1)))

void *FUN_0880c1ac(void *destination, const void *source, size_t length)
{
    char *out = destination;
    const char *in = source;
    int remaining = (int)length;

    if (in < out && out < in + remaining) {
        in += remaining;
        out += remaining;
        while (remaining--)
            *--out = *--in;
    } else {
        if (remaining >= (int)(sizeof(Word) * 4) && !UNALIGNED(in, out)) {
            Word *word_out = (Word *)out;
            const Word *word_in = (const Word *)in;

            while (remaining >= (int)(sizeof(Word) * 4)) {
                word_out[0] = word_in[0];
                word_out[1] = word_in[1];
                word_out[2] = word_in[2];
                word_out[3] = word_in[3];
                word_in += 4;
                word_out += 4;
                remaining -= sizeof(Word) * 4;
            }
            while (remaining >= (int)sizeof(Word)) {
                *word_out++ = *word_in++;
                remaining -= sizeof(Word);
            }
            out = (char *)word_out;
            in = (const char *)word_in;
        }
        while (remaining--)
            *out++ = *in++;
    }
    return destination;
}
