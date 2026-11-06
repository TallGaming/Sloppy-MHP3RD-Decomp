/*
 * Purpose: document the recovered wide-text wrapper ABI for FUN_0882d978.
 *
 * The target accepts an encoding context, a 16-bit output buffer and its
 * bound, and a zero-terminated 16-bit source string.  It selects short local
 * sequences and delegates their conversion to FUN_0882d868.  The exact
 * branch-to-sequence mapping remains unresolved, so this is an intentionally
 * uncompiled diagnostic partial rather than a matching candidate.
 */
typedef unsigned short u16;

extern void FUN_0882d868(void *context, u16 *output, int output_bound,
                         const u16 *source);

void FUN_0882d978(void *context, u16 *output, int output_bound,
                  const u16 *source)
{
    u16 local[4];

    if (*source == 0) {
        *output = 0;
        return;
    }

    /* The target builds up to three local 16-bit units before each delegate. */
    local[0] = source[0];
    local[1] = source[1];
    local[2] = source[2];
    local[3] = 0;
    FUN_0882d868(context, output, output_bound, local);
}
