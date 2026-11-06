/*
 * FUN_088eb22c: draw centered lines of encoded text.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: centered-line arithmetic remains longer and broadly different.
 */
typedef unsigned char u8;
char *FUN_088e7a74(void *, char *, char *);
int FUN_088e97a4(void *, char *);
void FUN_088eb180(void *, int, int, char *, ...);

void FUN_088eb22c(u8 *owner, short x, short y, char *text)
{
    char line[128];
    do {
        int width;
        text = FUN_088e7a74(owner, text, line);
        width = FUN_088e97a4(owner, line);
        FUN_088eb180(owner, (short)(x - (short)((width * owner[0x12c]) / 2)), y, line);
        y += owner[0x167];
    } while (text != 0);
}
