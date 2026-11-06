/*
 * FUN_0889f99c: invoke an encoded callback, then notify the object.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: encoded member-callback dispatch lowers to a different control shape.
 */

typedef unsigned char u8;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

typedef void (*Callback)(void);
typedef void (*ObjectCallback)(void *);

void FUN_0889f99c(u8 *object)
{
    u8 *encoded = FIELD(object, u8 *, 0x268);
    u32 adjust = FIELD(object, u32, 0x26c);

    if (encoded == 0) {
        return;
    }
    if ((adjust & 1) == 0) {
        ((Callback)encoded)();
    } else {
        void **adjusted = (void **)(object + (adjust >> 1));
        ((Callback)(encoded + *(int *)adjusted))();
    }
    ((ObjectCallback)(*(void ***)object)[0x15])(object);
}
