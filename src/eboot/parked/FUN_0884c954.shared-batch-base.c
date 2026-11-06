/* Initialize render state and publish a temporary mode-3 descriptor. */
typedef unsigned char u8;
typedef signed short s16;

struct Descriptor0884c954 {
    const void *first;
    const void *second;
    const void *argument;
    int mode;
};

struct Batch0884c954 {
    u8 prefix[0x1d4];
    u8 start[0x20];
    const void *first_descriptor;
    u8 records[0xd4 - 0x24];
    const void *second_descriptor;
};

extern void *D_09be9f18, *D_09beb0bc;
extern struct Batch0884c954 D_0897bdc8;
extern const u8 D_0896b3f8[], D_0896b4a0[];
extern void FUN_088e6ff0(void *, u8, int);
extern void FUN_088e7048(void *, u8);
extern void FUN_088e7054(void *, u8);
extern void FUN_08901000(void *, const void *, int, int, s16, s16);

void FUN_0884c954(void *unused, const void *argument)
{
    struct Descriptor0884c954 descriptor;

    FUN_088e6ff0(D_09be9f18, 14, 14);
    FUN_088e7048(D_09be9f18, 0);
    FUN_088e7054(D_09be9f18, 16);
    descriptor.second = D_0896b4a0;
    descriptor.mode = 3;
    D_0897bdc8.first_descriptor = &descriptor;
    D_0897bdc8.second_descriptor = &descriptor.second;
    descriptor.argument = argument;
    descriptor.first = D_0896b3f8;
    FUN_08901000(D_09beb0bc, D_0897bdc8.start, 10, 0, 0, 0);
}

