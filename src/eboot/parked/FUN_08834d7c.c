/* Validate one record against indexed fixed-stride state entries. */
typedef unsigned char u8;

extern u8 *D_09bf5250;
extern int FUN_088305b4(const void *left, const void *right);

void FUN_08834d7c(const void *record)
{
    int index;

    for (index = 0; index < 4; index++) {
        if (FUN_088305b4(D_09bf5250 + 0x1380 + index * 0x14c, record) == 0) return;
    }
}
