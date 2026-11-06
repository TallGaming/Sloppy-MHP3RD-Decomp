/*
 * FUN_088cf8a8: initialize an embedded object and clear three owner fields.
 *
 * Main EBOOT, G2 small-frame matching. Names and types are hypotheses.
 */

typedef unsigned char u8;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

extern void *D_09bb7e90;
void FUN_088d7834(void *object);
void FUN_088db274(void *object);

void FUN_088cf8a8(u8 *record)
{
    void *object = record + 0x3040;

    D_09bb7e90 = record;
    FUN_088d7834(object);
    /* This source order gives the reference store order under GCC's scheduler. */
    FIELD(record, void *, 0x3028) = 0;
    FIELD(record, void *, 0x3030) = 0;
    FIELD(record, void *, 0x3034) = 0;
    FUN_088db274(object);
}
