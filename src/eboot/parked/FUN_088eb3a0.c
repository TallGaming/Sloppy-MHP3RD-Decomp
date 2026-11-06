/*
 * FUN_088eb3a0: vertically center a multiline block before drawing it.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: multiline centering remains one instruction longer and different.
 */
typedef unsigned char u8;
int FUN_088e7b60(void *, char *);
void FUN_088eb2e4(void *, int, int, char *);

void FUN_088eb3a0(u8 *owner, short x, short y, int rows, char *text)
{
    int lines = FUN_088e7b60(owner, text);
    int difference = rows - lines;
    int half = difference / 2;
    int odd = difference % 2;
    unsigned int spacing = owner[0x167];
    FUN_088eb2e4(owner, x, (short)(y + (short)half * spacing +
                  (short)((int)(spacing * odd) / 2)), text);
}
