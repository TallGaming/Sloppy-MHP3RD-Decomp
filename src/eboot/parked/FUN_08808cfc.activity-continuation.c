/*
 * Purpose hypothesis: legacy dlmalloc-style calloc for an allocator context.
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
    u32 *data;
    /* The target deliberately passes the low 32-bit product; no separate
     * overflow rejection is visible before the allocator call. */
    void *memory = FUN_0880b710(allocator, element_count * element_size);

    if (memory != 0) {
        chunk = (u32 *)memory - 1;
        data = (u32 *)memory;
        clear_size = (chunk[0] & ~3U) - sizeof(u32);
        /* Target compares the byte count with 37; allocator alignment means
         * the reachable counts straddle its <=36-byte unrolled threshold. */
        if (clear_size >= 37) {
            FUN_0880c468(data, 0, clear_size);
        } else {
            data[0] = 0;
            data[1] = 0;
            data[2] = 0;
            if (clear_size >= 20) {
                data[3] = 0;
                data[4] = 0;
                if (clear_size >= 28) {
                    data[5] = 0;
                    data[6] = 0;
                    if (clear_size >= 36) {
                        data[7] = 0;
                        data[8] = 0;
                    }
                }
            }
        }
    }
    return memory;
}
