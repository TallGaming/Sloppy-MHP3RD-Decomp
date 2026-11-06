/*
 * FUN_08901bc0: initialize an object table and forward a converted global value.
 *
 * Main EBOOT, attempt-high-01 medium batch 1. Object and operation roles are hypotheses.
 */

typedef unsigned char u8;
typedef short s16;
extern void *D_09beb0bc;
int FUN_088fc0d4(void *manager, u8 value);
void FUN_088fb044(void *object, u8 second, int converted, int sentinel,
                  int x, int y, int type, int flag);

void FUN_08901bc0(void **object, u8 second, u8 third, s16 x, s16 y)
{
    int converted;

    *object = (void *)0x0896b410;
    converted = (char)FUN_088fc0d4(D_09beb0bc, third);
    FUN_088fb044(object, second, converted, -1, x, y, 4, 0);
}
