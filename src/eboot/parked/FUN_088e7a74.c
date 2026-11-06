/*
 * FUN_088e7a74: copy one line of encoded text and return the next line.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: encoded-line traversal remains longer and broadly different.
 */
typedef unsigned int u32;
extern void *D_08a2919c;
int FUN_0882db94(void *, int);
void FUN_0880ea5c(void *, const void *, int);

char *FUN_088e7a74(void *owner, char *text, char *output)
{
    u32 code = (u32)*text;
    char *cursor = text;
    int length = 0;

    if (code != 0 && code != 10) {
        do {
            int size = FUN_0882db94(D_08a2919c, code & 0xff);
            cursor += size;
            code = (u32)*cursor;
            length += size;
            if (code == 10) {
                break;
            }
        } while (code != 0);
    }
    FUN_0880ea5c(output, text, length);
    output[length] = 0;
    return *cursor == '\n' ? cursor + 1 : (char *)0;
}
