/* Purpose: locate pattern occurrences in a wide string and optionally mask them. */
extern void *D_08a2919c;
extern unsigned short *FUN_0882da98(void *, unsigned short *, const unsigned short *);
extern int FUN_0882da68(void *, const unsigned short *);
extern int FUN_0886a5d0(int, unsigned short);

int FUN_0886a858(int context, unsigned short *text, unsigned short *output,
                 const unsigned short *pattern, char replace, char boundary_mode)
{
    unsigned short *scan = text;
    int matches = 0;
    int pattern_length;

    for (;;) {
        unsigned short *found = FUN_0882da98(D_08a2919c, scan, pattern);
        int accepted = 1;
        int i;
        unsigned short *destination;
        if (found == 0)
            return matches;
        pattern_length = FUN_0882da68(D_08a2919c, pattern);
        if (boundary_mode == 1) {
            if (found != text && !FUN_0886a5d0(context, found[-1])) {
                unsigned short *after = found + pattern_length;
                if (*after != 0 && !FUN_0886a5d0(context, *after))
                    accepted = 0;
            }
        } else if (boundary_mode == 2) {
            int boundaries = found == text || FUN_0886a5d0(context, found[-1]);
            unsigned short *after = found + pattern_length;
            boundaries += *after == 0 || FUN_0886a5d0(context, *after);
            accepted = boundaries == 2;
        }
        if (!accepted) {
            scan = found + 1;
            continue;
        }
        destination = output + (found - text);
        for (i = 0; i < pattern_length; i++) {
            if (replace != 0)
                destination[i] = boundary_mode == 2 ? 0x2a : 0xff0a;
        }
        matches++;
        scan = found + pattern_length;
    }
}
