/*
 * Purpose: locate a 16-bit text pattern using the cluster's length helper
 * and byte comparator. This is diagnostic game-code recovery, not a public
 * library attribution.
 */
typedef unsigned short u16;

extern int FUN_0882da68(void *context, const u16 *text);
extern int FUN_0880bff4(const void *left, const void *right, unsigned int size);

u16 *FUN_0882da98(void *context, u16 *text, const u16 *pattern)
{
    int text_length = FUN_0882da68(context, text);
    int pattern_length = FUN_0882da68(context, pattern);

    if (pattern_length <= text_length) {
        while (*text != 0) {
            int too_short = text_length < pattern_length;

            if (*pattern == *text) {
                text_length--;
                if (too_short) {
                    return 0;
                }
                if (FUN_0880bff4(text, pattern, pattern_length << 1) == 0) {
                    return text;
                }
            } else {
                text_length--;
            }
            text++;
        }
    }
    return 0;
}
