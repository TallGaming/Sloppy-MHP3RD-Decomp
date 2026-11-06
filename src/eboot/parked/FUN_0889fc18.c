/*
 * FUN_0889fc18: rebuild an embedded transform and copy its position fields.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: matching-size transform form retains twelve load/register differences.
 */

typedef unsigned char u8;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

void FUN_0887799c(u32, u32, u32, void *);
void FUN_08877bd0(void *, void *);
void FUN_08875a78(void *, void *, void *);

void FUN_0889fc18(u8 *object)
{
    u32 matrix[16];
    u8 *transform = object + 0x10;

    FUN_0887799c(FIELD(object, u32, 0xa0), FIELD(object, u32, 0xa4),
                 FIELD(object, u32, 0xa8), matrix);
    FUN_08877bd0(transform, object + 0x70);
    FIELD(object, u32, 0x40) = FIELD(object, u32, 0x80);
    FIELD(object, u32, 0x44) = FIELD(object, u32, 0x84);
    FIELD(object, u32, 0x48) = FIELD(object, u32, 0x88);
    FUN_08875a78(transform, transform, matrix);
}
