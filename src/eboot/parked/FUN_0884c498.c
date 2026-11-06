/*
 * FUN_0884c498 partial field view.
 *
 * Purpose: preserve the verified record initialization and stack descriptor
 * layout. The sole observed caller passes an unused context in a0 and a
 * resolved value pointer in a1. The two later callees have no supported ABI.
 * This file is intentionally not a whole compiled candidate.
 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef int s32;

struct Record_0884c498 {
    u8 unknown_000[0x12c];
    u8 byte_12c;
    u8 byte_12d;
    u8 byte_12e;
    u8 unknown_12f[0x167 - 0x12f];
    u8 byte_167;
};

struct Descriptor_0884c498 {
    const void *first;
    const void *second;
    const void *third;
    const void *argument;
    s32 mode;
};

extern struct Record_0884c498 *D_09be9f18;
extern void *D_0897bad4;
extern const void *D_0896b428;
extern const void *D_0896b3f8;
extern const void *D_0896b4a0;

extern void FUN_088e6ff0(struct Record_0884c498 *record, u8 a, s32 b);
extern void FUN_088e7048(struct Record_0884c498 *record, u8 value);
extern void FUN_088e7054(struct Record_0884c498 *record, u8 value);

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

static void FUN_0884c498_supported_prefix(void *unused_context,
                                          const void *argument)
{
    struct Descriptor_0884c498 descriptor;
    struct Record_0884c498 *record = D_09be9f18;

    (void)unused_context;

    FUN_088e6ff0(record, 14, 14);
    FUN_088e7048(record, 0);
    FUN_088e7054(record, 16);

    descriptor.first = D_0896b428;
    descriptor.second = D_0896b3f8;
    descriptor.third = D_0896b4a0;
    descriptor.argument = argument;
    descriptor.mode = 7;

    FIELD(D_0897bad4, const void *, 0x2cc) = &descriptor.third;
    FIELD(D_0897bad4, const void *, 0x188) = &descriptor.second;
    FIELD(D_0897bad4, const void *, 0x2f0) = &descriptor;
}
