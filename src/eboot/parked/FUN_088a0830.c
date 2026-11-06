/*
 * FUN_088a0830: build three vectors and submit a packed object request.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: aggregate initialization produces a longer, differently scheduled frame.
 */

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

typedef struct Vector4 { u32 x, y, z, w; } Vector4;
void FUN_088a0730(void *, void *, u8, Vector4 *, Vector4 *, Vector4 *);
void FUN_088a04c8(void *, u8, u16, u32, void *);

void FUN_088a0830(void *object, u8 *request)
{
    Vector4 a = { FIELD(request, u32, 4), FIELD(request, u32, 8),
                  FIELD(request, u32, 0x0c), 0 };
    Vector4 b = { FIELD(request, u32, 0x10), FIELD(request, u32, 0x14),
                  FIELD(request, u32, 0x18), 0 };
    Vector4 c = { FIELD(request, u32, 0x1c), FIELD(request, u32, 0x20),
                  FIELD(request, u32, 0x24), 0 };
    u32 matrix[16];

    FUN_088a0730(object, matrix, request[0x28], &a, &b, &c);
    FUN_088a04c8(object, request[0], FIELD(request, u16, 2),
                 FIELD(request, u32, 0x2c), matrix);
}
