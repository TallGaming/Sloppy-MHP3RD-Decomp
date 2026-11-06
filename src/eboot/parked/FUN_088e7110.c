/*
 * FUN_088e7110: measure a zero-terminated encoded string using character classes.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact instruction count retains four allocation differences.
 */
extern void *D_08a2919c;
int FUN_0882d590(void *, void *);
int FUN_088e7060(void *, int);

int FUN_088e7110(void *owner, void *text)
{
    int code;
    int increment;
    int width = 0;
    void *cursor[4];

    cursor[0] = text;
    while ((code = FUN_0882d590(D_08a2919c, cursor)) != 0) {
        code = FUN_088e7060(owner, code);
        increment = 2;
        if (code != 0) {
            increment = 1;
        }
        width += increment;
    }
    return width;
}
