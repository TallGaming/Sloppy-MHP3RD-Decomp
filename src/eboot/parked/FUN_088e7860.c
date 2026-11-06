/*
 * FUN_088e7860: position and draw an encoded string after measuring its width.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact instruction count retains float and call-allocation differences.
 */
typedef unsigned char u8;
extern float D_08969070;
void FUN_088e7048(void *, u8);
int FUN_088e77a0(void *, unsigned int, unsigned int, short *);
void FUN_088e7640(void *, int, int, int, u8, u8, u8, short *);

void FUN_088e7860(void *owner, short x, short y, char mode,
                  u8 normal_width, u8 special_width, u8 color, short *text)
{
    short width;

    FUN_088e7048(owner, (u8)mode);
    width = (short)FUN_088e77a0(owner, normal_width, special_width, text);
    FUN_088e7640(owner, (short)((float)x + (float)width * D_08969070), y,
                 mode, normal_width, special_width, color, text);
}
