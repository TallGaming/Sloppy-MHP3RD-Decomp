/*
 * FUN_088e7c58: return the display width of the first encoded character.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact instruction count retains broad allocation differences.
 */
extern void *D_08a2919c;
int FUN_0882d590(void *, void *);
int FUN_088e7060(void *, int);

int FUN_088e7c58(void *owner, char *text)
{
    char *cursor[4];
    int code;
    int classified;
    int width = 2;

    if (text == 0 || *text == 0) {
        return 0;
    }
    cursor[0] = text;
    code = FUN_0882d590(D_08a2919c, cursor);
    classified = FUN_088e7060(owner, code);
    if (classified != 0) {
        width = 1;
    }
    return width;
}
