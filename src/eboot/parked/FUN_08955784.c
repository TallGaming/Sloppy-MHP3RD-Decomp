/* FUN_08955784: reserve a contiguous run in one of two entry banks.
 * Main EBOOT, attempt-high-01 241-512 byte batch 22. Bank roles are hypotheses. */
typedef unsigned char u8;
void FUN_09c01c04(void *);

int FUN_08955784(u8 *object, unsigned int requested, u8 tag, char first_bank)
{
    u8 *flags;
    u8 *entries;
    int limit;
    int start = -1;
    int run = 0;
    int index;

    if (first_bank == 1) {
        entries = object + 0xcf0;
        flags = object + 0xb90;
        limit = 0x52;
    } else {
        entries = object + 0x1c50;
        flags = object + 0xbe2;
        limit = 0x100;
    }
    for (index = 0; index != limit; index++) {
        if (flags[index] == 0) {
            if (start < 0) start = index;
            run++;
            if ((requested & 0xff) == run) {
                int i;
                for (i = 0; i != run; i++) {
                    flags[start + i] = tag | 0x80;
                    FUN_09c01c04(entries + (start + i) * 0x30);
                }
                return (int)(entries + start * 0x30);
            }
        } else {
            if (start >= 0 && (requested & 0xff) == 0) break;
            start = -1;
            run = 0;
        }
    }
    return 0;
}
