/* Purpose: scan all configured word lists and optionally mask matching text. */
extern void *D_08a2919c;
extern int FUN_0882da68(void *, const void *);
extern int FUN_08868230(int, short);
extern int FUN_08868244(int, short);
extern int FUN_08868258(int, short);
extern void FUN_0882d66c(void *, void *, int, int);
extern void FUN_0886ab70(int, void *, const void *, int);
extern int FUN_0886a858(int, void *, void *, void *, int, int);

int FUN_0886ae7c(int context, const void *input, char replace)
{
    unsigned short normalized[256];
    unsigned short pattern[64];
    int total = 0;
    int source;
    int index;

    FUN_0886ab70(context, normalized, input, FUN_0882da68(D_08a2919c, input));
    for (source = 0; source < 5; source++) {
        short (*lookup)(int, short) = 0;
        if (source == 0)
            lookup = (short (*)(int, short))FUN_08868230;
        else if (source < 3)
            lookup = (short (*)(int, short))FUN_08868244;
        else
            lookup = (short (*)(int, short))FUN_08868258;
        for (index = 0;; index++) {
            int entry = lookup(context, (short)index);
            if (entry == 0)
                break;
            FUN_0882d66c(D_08a2919c, pattern, 0x40, entry);
            total += FUN_0886a858(context, normalized, (void *)input, pattern,
                                  replace, source == 0 ? 0 : 1);
        }
    }
    return total != 0;
}
