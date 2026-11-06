/*
 * FUN_08905a50: store a value in an indexed request, then submit the request.
 *
 * The global manager, entry layout, and parameter meanings are hypotheses.
 */
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned int u32;

struct Entry08905a50 {
    u32 unknown00;
    u32 value04;
    u8 unknown08[8];
};

extern void *D_09beb0bc;
extern struct Entry08905a50 D_089f71b0[];
extern void FUN_08905734(void *manager, int index,
                         struct Entry08905a50 *entry,
                         u32 value3, u32 value4, s8 value5);

void FUN_08905a50(void *unused, int index, u32 value,
                  u32 value3, u32 value4, int value5)
{
    struct Entry08905a50 *entry = &D_089f71b0[index];

    entry->value04 = value;
    FUN_08905734(D_09beb0bc, index, entry, value3, value4, (s8)value5);
}
