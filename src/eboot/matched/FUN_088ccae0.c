/*
 * FUN_088ccae0: create two related objects and store them in a large record.
 *
 * Main EBOOT, G2 small-frame matching. Names and types are hypotheses.
 */

typedef unsigned char u8;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

void *FUN_088ccaa8(void *record, void *value);
void *FUN_088ccad4(void *record, void *object);

void FUN_088ccae0(u8 *record, void *value)
{
    void *first = FUN_088ccaa8(record, value);
    FIELD(record, void *, 0x9be4) = first;
    FIELD(record, void *, 0x9be0) = FUN_088ccad4(record, first);
}
