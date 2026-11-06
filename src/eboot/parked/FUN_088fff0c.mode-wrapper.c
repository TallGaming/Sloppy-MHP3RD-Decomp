/* Submit a subrecord with predicate-driven render-mode changes. */
typedef unsigned int u32;
typedef signed short s16;

extern void *D_09beb0bc;
extern int FUN_088fac54(char *record);
extern void FUN_088fa038(void *owner, u32 flags);
extern void FUN_088ff8f0(void *manager, char *subrecord, u32 value, int field,
                         s16 x, s16 y, void *resource, int first, int second, int mode);

void FUN_088fff0c(char *record, u32 value, int field, s16 x, s16 y)
{
    if (FUN_088fac54(record))
        FUN_088fa038(D_09beb0bc, 1);
    FUN_088ff8f0(D_09beb0bc, record + 0x20, value, field, x, y, 0, -1, -1, 0);
    if (FUN_088fac54(record))
        FUN_088fa038(D_09beb0bc, 0);
}

