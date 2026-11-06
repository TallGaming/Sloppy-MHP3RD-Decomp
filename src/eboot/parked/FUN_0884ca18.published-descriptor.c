/* Submit nine static render records with a temporary resource-pointer pair. */
typedef unsigned char u8;
typedef signed short s16;

struct ResourcePair0884ca18 {
    const void *alternate;
    const void *first;
};

struct Batch0884ca18 {
    u8 start[0x20];
    const void *resource;
};

extern void *D_09be9f18, *D_09beb0bc;
extern struct Batch0884ca18 D_0897bc3c;
extern const u8 D_0896b428[], D_0896b3f8[];
extern void FUN_088e6ff0(void *, u8, int);
extern void FUN_088e7048(void *, u8);
extern void FUN_088e7054(void *, u8);
extern void FUN_08901000(void *, const void *, int, int, s16, s16);

void FUN_0884ca18(void)
{
    struct ResourcePair0884ca18 resources;

    FUN_088e6ff0(D_09be9f18, 14, 14);
    FUN_088e7048(D_09be9f18, 0);
    FUN_088e7054(D_09be9f18, 16);
    resources.alternate = D_0896b428;
    D_0897bc3c.resource = &resources.first;
    resources.first = D_0896b3f8;
    FUN_08901000(D_09beb0bc, D_0897bc3c.start, 9, 0, 0, 0);
}

