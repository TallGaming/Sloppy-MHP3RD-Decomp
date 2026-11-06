/*
 * Purpose hypothesis: dlmalloc 2.6.6-style calloc for an allocator context.
 *
 * Public dlmalloc source uses this three-level unrolled clear for chunks of
 * at most nine machine words.  The local group-A build retains the algorithm
 * but not the target's branch scheduling, so this remains a parked draft.
 */
typedef unsigned int u32;

void *FUN_0880b710(void *allocator, u32 size);
void FUN_0880c468(void *destination, int value, u32 size);

void *FUN_08808cfc(void *allocator, u32 element_count, u32 element_size)
{
    u32 *chunk;
    u32 clear_size;
    u32 clear_words;
    u32 *data;
    void *memory = FUN_0880b710(allocator, element_count * element_size);

    if (memory != 0) {
        chunk = (u32 *)memory - 1;
        data = (u32 *)memory;
        clear_size = (chunk[0] & ~3U) - sizeof(u32);
        clear_words = clear_size / sizeof(u32);

        if (clear_words > 9) {
            FUN_0880c468(data, 0, clear_size);
        } else {
            data[0] = 0;
            data[1] = 0;
            data[2] = 0;
            if (clear_words > 4) {
                data[3] = 0;
                data[4] = 0;
                if (clear_words > 6) {
                    data[5] = 0;
                    data[6] = 0;
                    if (clear_words > 8) {
                        data[7] = 0;
                        data[8] = 0;
                    }
                }
            }
        }
    }
    return memory;
}
