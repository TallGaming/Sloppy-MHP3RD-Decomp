/*
 * FUN_088992bc: clear a global buffer and initialize its descriptor.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: required absolute data symbols are not defined in symbols.s.
 */

typedef unsigned char u8;
typedef unsigned int u32;

struct Descriptor_088992bc
{
    u32 unknown_00;
    u32 unknown_04;
    u32 unknown_08;
    u32 size_0c;
    void *buffer_10;
};

extern u8 D_09bb5c58;
extern struct Descriptor_088992bc D_09bb5c44;
void FUN_088ebb10(void *destination, int value, u32 size);

void FUN_088992bc(void)
{
    FUN_088ebb10(&D_09bb5c58, 0, 0x1000);
    D_09bb5c44.unknown_00 = 0;
    D_09bb5c44.buffer_10 = &D_09bb5c58;
    D_09bb5c44.size_0c = 64;
    D_09bb5c44.unknown_08 = 0;
    D_09bb5c44.unknown_04 = 0;
}
