/* Publish a temporary UI descriptor, then draw the label selected by the mode. */
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;

struct Descriptor0884c82c {
    const void *first;
    const void *second;
    const void *argument;
    int mode;
};

struct Batch0884c82c {
    u8 prefix[0x48];
    u8 start[0x20];
    const void *first_descriptor;
    u8 records[0x114 - 0x6c];
    s16 label_x;
    s16 label_y;
    u8 unknown[4];
    const void *second_descriptor;
};

extern void *D_09be9f18, *D_09beb0bc, *D_08aace80;
extern struct Batch0884c82c D_0897bdc8;
extern const u8 D_0896b3f8[], D_0896b4a0[];
extern void FUN_088e6ff0(void *, u8, int);
extern void FUN_088e7048(void *, u8);
extern void FUN_088e7054(void *, u8);
extern void FUN_08901000(void *, const void *, int, int, s16, s16);
extern char *FUN_08867d40(void *, u16);
extern void FUN_088eb2e4(void *, s16, s16, char *);

void FUN_0884c82c(void *unused, const void *argument, u8 mode)
{
    struct Descriptor0884c82c descriptor;
    s16 x, y;
    void *record;
    char *text;

    FUN_088e6ff0(D_09be9f18, 14, 14);
    FUN_088e7048(D_09be9f18, 0);
    FUN_088e7054(D_09be9f18, 16);
    descriptor.second = D_0896b4a0;
    descriptor.mode = 1;
    descriptor.argument = argument;
    D_0897bdc8.second_descriptor = &descriptor.second;
    D_0897bdc8.first_descriptor = &descriptor;
    descriptor.first = D_0896b3f8;
    FUN_08901000(D_09beb0bc, D_0897bdc8.start, 10, 0, 0, 0);
    y = D_0897bdc8.label_y + 16;
    record = D_09be9f18;
    x = D_0897bdc8.label_x;
    text = FUN_08867d40(D_08aace80, mode ? 23 : 24);
    FUN_088eb2e4(record, x, y, text);
}

