/*
 * INCOMPLETE / UNCOMPILED: loader-selected update of a runtime 12-word block.
 *
 * The only observed entry is an unlisted thunk that tail-calls this function
 * with event == 1 and selector == 0xffff.  The referenced 96-byte block lies
 * outside the extracted static data image, so its owning symbol and type are
 * not yet established.  It is represented as twelve 64-bit little-endian
 * counters because the target increments each low word and propagates carry.
 */
typedef unsigned long long u64;

extern volatile u64 runtime_update_words[12];

void FUN_08812980(int event, unsigned int selector)
{
    if (event != 1)
        return;
    if (selector != 0xffffU)
        return;

    runtime_update_words[0]++;
    runtime_update_words[1]++;
    runtime_update_words[2]++;
    runtime_update_words[3]++;
    runtime_update_words[4]++;
    runtime_update_words[5]++;
    runtime_update_words[6]++;
    runtime_update_words[7]++;
    runtime_update_words[8]++;
    runtime_update_words[9]++;
    runtime_update_words[10]++;
    runtime_update_words[11]++;
}
