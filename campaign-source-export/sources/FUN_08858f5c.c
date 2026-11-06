/* Purpose: test whether a caller-provided record begins with the shared four-byte key. */

typedef unsigned int u32;

extern unsigned char D_08965c04[];
extern int FUN_0880e8dc(const char *lhs, const char *rhs, u32 count);

int FUN_08858f5c(const char *record)
{
    return FUN_0880e8dc(record, (const char *)D_08965c04, 4) == 0;
}
