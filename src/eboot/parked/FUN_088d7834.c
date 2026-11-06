/*
 * FUN_088d7834: initialize an embedded object and register it with its owner.
 *
 * Main EBOOT, G2 small-frame matching. Names and types are hypotheses.
 * PARKED: the method table needs a new symbol and two independent operations
 * have a scheduler-order difference after three plain-source attempts.
 */

typedef unsigned char u8;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))
extern u8 D_0896b138;
extern void *D_09bb7e90;
extern void *D_08a31e8c;

void FUN_0889c050(void *object);
void FUN_088cca60(void *owner, void *object);
void FUN_0885698c(void *context);

void FUN_088d7834(u8 *object)
{
    void *owner;

    FIELD(object, void *, 0x000) = &D_0896b138;
    FUN_0889c050(object + 0x40);
    owner = D_09bb7e90;
    FIELD(object, void *, 0x160) = 0;
    FIELD(object, void *, 0x15c) = 0;
    FUN_088cca60(owner, object);
    FUN_0885698c(D_08a31e8c);
}
