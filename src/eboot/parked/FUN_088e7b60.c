/*
 * FUN_088e7b60: count the lines in a newline-separated string.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact instruction count retains one epilogue/register difference.
 */
int FUN_0880e4d4(char *, int);

int FUN_088e7b60(void *unused, char *text)
{
    int lines = 0;
    char value = *text;

    for (;;) {
        int newline;
        if (value == 0) {
            return lines;
        }
        newline = FUN_0880e4d4(text, 10);
        if (newline == 0) {
            break;
        }
        value = *(char *)(newline + 1);
        lines++;
        text = (char *)(newline + 1);
    }
    lines++;
    return lines;
}
