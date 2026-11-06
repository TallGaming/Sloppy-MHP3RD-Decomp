/*
 * FUN_0890172c: set the method table D_0896b410, then store the settings (FUN_088fb044).
 *
 * Main EBOOT, match slice 7 (small straight-line leaf functions, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern const u8 D_0896b410; /* Hypothesis: type from the access only. */
void FUN_088fb044(void *object, u8 a, s8 b, s32 c, s16 d, s16 e, s8 f, s32 g);

void FUN_0890172c(void **object, u8 a, s8 b, s32 c, s16 d, s16 e, s8 f)
{
    *object = (void *)&D_0896b410;
    FUN_088fb044(object, a, b, c, d, e, f, 0);
}
