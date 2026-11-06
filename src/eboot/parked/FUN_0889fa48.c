/*
 * FUN_0889fa48: invoke a second encoded callback and run completion hooks.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: encoded callback and virtual completion paths lower differently.
 */

typedef unsigned char u8;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

typedef void (*Callback)(void);
typedef int (*Query)(void *);
typedef void (*ObjectCallback)(void *);

void FUN_0889fa48(u8 *object)
{
    u8 *encoded = FIELD(object, u8 *, 0x270);
    u32 adjust = FIELD(object, u32, 0x274);
    void **methods = *(void ***)object;
    int complete;

    if (encoded == 0) {
        return;
    }
    if ((adjust & 1) == 0) {
        ((Callback)encoded)();
    } else {
        void **adjusted = (void **)(object + (adjust >> 1));
        ((Callback)(encoded + *(int *)adjusted))();
    }
    complete = ((Query)methods[0x15])(object);
    if (complete != 0) {
        ((ObjectCallback)methods[6])(object);
        ((ObjectCallback)methods[7])(object);
    }
}
