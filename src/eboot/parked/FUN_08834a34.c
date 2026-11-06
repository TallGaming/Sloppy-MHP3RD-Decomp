/* Classify a six-byte record against the four equally spaced state records. */
typedef unsigned char u8;

extern u8 *D_09bf5250;
extern int FUN_088305b4(const void *left, const void *right);

int FUN_08834a34(const void *record)
{
    u8 *candidate = D_09bf5250 + 0x1380;
    int index;

    for (index = 0; index < 4; index++) {
        if (FUN_088305b4(candidate, record) == 0) return 0;
        candidate += 0x14c;
    }
    return 0x8000;
}
