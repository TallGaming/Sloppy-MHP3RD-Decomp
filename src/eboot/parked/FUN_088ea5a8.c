/*
 * FUN_088ea5a8: draw an offset shadow glyph followed by its foreground glyph.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact instruction count retains call/global allocation differences.
 */
extern char D_08969078[];
void FUN_088ea454(void *, int, int, int, void *, ...);

void FUN_088ea5a8(void *owner, short x, short y, char shadow, char foreground,
                  void *argument, short dx, short dy)
{
    FUN_088ea454(owner, (short)(dx + x), (short)(dy + y), shadow, D_08969078);
    FUN_088ea454(owner, x, y, foreground, D_08969078, argument);
}
