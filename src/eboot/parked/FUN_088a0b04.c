/*
 * FUN_088a0b04: destroy two optional child objects and restore the base vtable.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: code shape matches, but the derived vtable lacks an absolute symbol.
 */

typedef unsigned char u8;
#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))
extern u8 D_0896ac68;
extern u8 D_0896ac98;
typedef struct Child Child;
typedef struct ChildMethods { void *reserved[14]; void (*destroy)(Child *); } ChildMethods;
struct Child { ChildMethods *methods; };

void FUN_088a0b04(u8 *object)
{
    int i;
    FIELD(object, void *, 0) = &D_0896ac98;
    for (i = 0; i < 2; i++) {
        Child **slot = (Child **)(object + 0x174 + i * 4);
        if (*slot != 0) {
            (*slot)->methods->destroy(*slot);
            *slot = 0;
        }
    }
    FIELD(object, void *, 0) = &D_0896ac68;
}
