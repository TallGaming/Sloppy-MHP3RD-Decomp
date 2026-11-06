/*
 * FUN_088a0ff4: allocate, initialize, and copy the object-manager backing block.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: allocation name symbol and call/load scheduling differ.
 */

typedef unsigned char u8;
typedef unsigned int u32;
#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))
extern u8 D_0896738b;
void FUN_088a0fb0(void);
void *FUN_08960ae8(const char *, int, u32, int);
void FUN_08960ad8(void *, void *);
void FUN_08878c18(void *, const void *, u32);

void FUN_088a0ff4(u8 *object)
{
    void *allocation;
    FUN_088a0fb0();
    allocation = FUN_08960ae8((const char *)&D_0896738b + 1, 0, 0x60000, 0);
    FIELD(object, void *, 0x4e4) = allocation;
    FUN_08960ad8(allocation, object + 0x4e8);
    FUN_08878c18(object, FIELD(object, void *, 0x4e8), 0x60000);
}
