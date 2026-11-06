/*
 * FUN_088e90d0: format one of three numeric labels and optionally draw it.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: large local formatting setup remains longer and broadly different.
 */
extern char D_08969074[];
void FUN_0880e1d4(char *, const char *, unsigned int);
void FUN_088e7ce8(void *, char *, void *);

void FUN_088e90d0(void *owner, void *output, short kind, char enabled)
{
    char text[0x304];
    unsigned int value;

    if (kind >= 0) {
        value = 0x21c;
        if (kind == 0) value = 0x640;
        if (kind < 2) {
            FUN_0880e1d4(text, D_08969074, value);
        } else {
            if (kind != 2) return;
            text[0] = '0';
            text[1] = 0;
        }
        if (enabled == 1) FUN_088e7ce8(owner, text, output);
    }
}
