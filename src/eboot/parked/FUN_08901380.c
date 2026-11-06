/* FUN_08901380: position nine frame pieces around a centered rectangle.
 * Main EBOOT, attempt-high-01 513-1024 byte batch 1. Frame roles are hypotheses. */
extern short D_089fc7a2, D_089fc908, D_089fc7c6, D_089fc8e4, D_089fc7ea;
extern short D_089fc7a0; extern int D_089fc850, D_089fc874, D_089fc898, D_089fc8bc;
void FUN_088fff0c(void *, int, int, int, int);
void FUN_08901168(void *, void *, int, int, int);

void FUN_08901380(char *frame, short cx, short cy, int width, int height)
{
    short half_w = width >> 1;
    short half_h = height >> 1;
    int left = (short)(cx - half_w);
    int right = (short)(cx + half_w);
    int top = (short)(cy - half_h);
    int bottom = (short)(cy + half_h);

    *(short *)(frame + 0x24) = (short)width + D_089fc908;
    *(short *)(frame + 0xc6) = (short)height + D_089fc7a2;
    *(short *)(frame + 0x116) = (short)height + D_089fc7c6;
    *(short *)(frame + 0x74) = (short)width + D_089fc8e4;
    *(short *)(frame + 0xc4) = (short)width + D_089fc7a0;
    *(short *)(frame + 0x166) = (short)height + D_089fc7ea;
    FUN_088fff0c(frame + 0xa0, 0, 4, left, top);
    FUN_088fff0c(frame + 0xf0, 0, 4, left, top);
    FUN_088fff0c(frame + 0x140, 0, 4, right, top);
    FUN_088fff0c(frame, 0, 0, left, top);
    FUN_088fff0c(frame + 0x50, 0, 0, left, bottom);
    FUN_08901168(frame, &D_089fc850, 0, left, top);
    FUN_08901168(frame, &D_089fc874, 0, right, top);
    FUN_08901168(frame, &D_089fc898, 0, right, bottom);
    FUN_08901168(frame, &D_089fc8bc, 0, left, bottom);
}
