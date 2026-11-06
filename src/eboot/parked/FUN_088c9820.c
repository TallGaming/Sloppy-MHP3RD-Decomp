/*
 * FUN_088c9820: dispatch an event selected by a table entry state.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: the state table lacks an absolute symbol and branch layout differs.
 */

typedef unsigned char u8;
typedef unsigned short u16;
typedef short s16;

extern u8 D_089caf92;
void FUN_088c97b8(void *object, int event);

void FUN_088c9820(void *object, unsigned int index)
{
    s16 state = *(s16 *)(&D_089caf92 + (u16)index * 0x14);
    int event;

    if (state == 2) {
        event = 0x1648;
    } else if (state == 3) {
        event = 0x1649;
    } else if (state == 0) {
        event = 0x1647;
    } else {
        return;
    }
    FUN_088c97b8(object, event);
}
