/*
 * FUN_0884c768 partial field view.
 *
 * Purpose: retain the observed context/value handoff, record reset, and stack
 * descriptor publication. The final manager call is omitted because
 * FUN_08901000 remains PARKED and its full EABI interface is unverified.
 */
typedef unsigned char u8;
typedef int s32;

struct Record_0884c768 {
    u8 unknown_000[0x12c];
    u8 byte_12c;
    u8 byte_12d;
    u8 byte_12e;
    u8 unknown_12f[0x167 - 0x12f];
    u8 byte_167;
};

struct Descriptor_0884c768 {
    const void *first;
    const void *second;
    const void *argument;
    s32 mode;
};

extern struct Record_0884c768 *D_09be9f18;
extern void *D_0897bdc8;
extern const void *D_0896b3f8;
extern const void *D_0896b4a0;

extern void FUN_088e6ff0(struct Record_0884c768 *record, u8 a, s32 b);
extern void FUN_088e7048(struct Record_0884c768 *record, u8 value);
extern void FUN_088e7054(struct Record_0884c768 *record, u8 value);

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

static void FUN_0884c768_supported_prefix(void *unused_context,
                                          const void *argument)
{
    struct Descriptor_0884c768 descriptor;
    struct Record_0884c768 *record = D_09be9f18;

    (void)unused_context;
    FUN_088e6ff0(record, 14, 14);
    FUN_088e7048(record, 0);
    FUN_088e7054(record, 16);

    descriptor.first = D_0896b3f8;
    descriptor.second = D_0896b4a0;
    descriptor.argument = argument;
    descriptor.mode = 2;

    FIELD(D_0897bdc8, const void *, 0x68) = &descriptor;
    FIELD(D_0897bdc8, const void *, 0x11c) = &descriptor.second;
}
