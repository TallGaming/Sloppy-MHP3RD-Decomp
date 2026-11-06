/*
 * FUN_088a0c14: configure directional short fields on a virtual child record.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: shared virtual lookup and branch layout compile to a shorter frame.
 */

typedef unsigned char u8;
typedef unsigned short u16;
typedef short s16;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))
typedef void *(*Method0)(void *);

void FUN_088a0c14(u8 *object, u16 positive, u16 negative, int direction)
{
    void **methods = *(void ***)object;
    u8 *child = ((Method0)methods[0x11])(object);

    if (direction == 0) {
        FIELD(child, u16, 0x7a) = 0;
        child[0x74] = 0;
        FIELD(child, u16, 0x76) = 0;
        FIELD(child, u16, 0x78) = 0;
    } else if (direction < 0) {
        FIELD(child, u16, 0x7a) = negative;
        child[0x74] = 1;
        FIELD(child, s16, 0x76) = -direction;
    } else {
        FIELD(child, u16, 0x7a) = positive;
        child[0x74] = 1;
        FIELD(child, s16, 0x76) = direction;
    }
}
