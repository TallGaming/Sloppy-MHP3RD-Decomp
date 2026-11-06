/*
 * Purpose: diagnostic ABI sketch for a post-submit packet dispatch path.
 * The five direct calls indicate that the packed key is recovered before
 * validation and dispatch.  This is intentionally an incomplete candidate.
 */
typedef unsigned int u32;

extern void FUN_088ebb10(void *dst, int value, u32 size);
extern int FUN_0882e41c(void *context, const void *entries);
extern void FUN_0882e484(u32 *out_pair);
extern int FUN_0882f054(void *value);
extern int FUN_0882f77c(void *context, u32 key, void *packet);

int FUN_0883b20c(void *context, u32 *packet)
{
    int valid;

    FUN_088ebb10(packet, 0, 8);
    FUN_0882e484(packet);
    valid = FUN_0882e41c(context, packet);
    if (valid == 0) {
        return 0;
    }
    if (FUN_0882f054(packet) == 0) {
        return 0;
    }
    return FUN_0882f77c(context, packet[0], packet);
}
