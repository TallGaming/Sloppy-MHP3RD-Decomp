/*
 * FUN_088e7e08: count encoded characters while ignoring newline bytes.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: nested encoded-text loops remain shorter and differently allocated.
 */
extern void *D_08a2919c;
int FUN_0882d590(void *, void *);

int FUN_088e7e08(void *unused, char *text)
{
    int count = 0;
    char *cursor[4];

    cursor[0] = text;
    for (;;) {
        char value = *cursor[0];
        for (;;) {
            if (value == 0) {
                return count;
            }
            if (value != '\n') {
                break;
            }
            value = cursor[0][1];
            cursor[0]++;
        }
        count++;
        FUN_0882d590(D_08a2919c, cursor);
    }
}
