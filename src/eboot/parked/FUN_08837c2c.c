/* Purpose: test the same membership predicate with the observed record-stride walk. */
typedef unsigned char u8;

extern u8 D_08a29258[];
extern int FUN_088305b4(const void *left, const void *right);

int FUN_08837c2c(const void *record)
{
    const u8 *candidate = D_08a29258;
    const u8 *end = D_08a29258 + 4 * 0x14c;

    while (candidate != end) {
        if (FUN_088305b4(candidate, record) == 0) {
            return 0;
        }
        candidate += 0x14c;
    }
    return 1;
}
