/*
 * FUN_088eb2e4: draw quarter-offset centered lines of encoded text.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: quarter-offset arithmetic remains longer and broadly different.
 */
typedef unsigned char u8;
char *FUN_088e7a74(void *, char *, char *);
int FUN_088e97a4(void *, char *);
void FUN_088eb180(void *, int, int, char *, ...);

void FUN_088eb2e4(u8 *owner, short x, short y, char *text)
{
    char line[128];
    do {
        int width;
        text = FUN_088e7a74(owner, text, line);
        width = FUN_088e97a4(owner, line) * owner[0x12c];
        if (width < 0) width += 3;
        FUN_088eb180(owner, (short)(x - (short)(width >> 2)), y, line);
        y += owner[0x167];
    } while (text != 0);
}
