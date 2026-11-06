/* Purpose: reset the render state and publish a temporary descriptor for submission. */
typedef unsigned char u8;
typedef signed short s16;

struct Rec_088e6ff0;

struct Descriptor0884c768 {
    const void *first;
    const void *second;
    const void *argument;
    int mode;
};

struct BatchState0884c768 {
    u8 prefix[0x48];
    u8 batch_start[0x20];
    const void *first_descriptor;
    u8 between_descriptors[0x11c - 0x6c];
    const void *second_descriptor;
};

extern struct Rec_088e6ff0 *D_09be9f18;
extern struct BatchState0884c768 D_0897bdc8;
extern const u8 D_0896b3f8[], D_0896b4a0[];
extern void *D_09beb0bc;
extern void FUN_088e6ff0(struct Rec_088e6ff0 *record, u8 first, int second);
extern void FUN_088e7048(void *record, u8 value);
extern void FUN_088e7054(void *record, u8 value);
extern void FUN_08901000(void *manager, const void *records, int count,
                         int fourth, s16 fifth, s16 sixth);

void FUN_0884c768(void *unused, const void *argument)
{
    struct Descriptor0884c768 descriptor;

    FUN_088e6ff0(D_09be9f18, 14, 14);
    FUN_088e7048(D_09be9f18, 0);
    FUN_088e7054(D_09be9f18, 16);

    descriptor.second = D_0896b4a0;
    descriptor.mode = 2;
    D_0897bdc8.first_descriptor = &descriptor;
    D_0897bdc8.second_descriptor = &descriptor.second;
    descriptor.argument = argument;
    descriptor.first = D_0896b3f8;
    FUN_08901000(D_09beb0bc, D_0897bdc8.batch_start, 10, 0, 0, 0);
}
