/* FUN_08929668: populate six text entries and their availability flags.
 * Main EBOOT, attempt-high-01 241-512 byte batch 13. Entry roles are hypotheses. */
typedef unsigned char u8;

extern void *D_08aacea4;

void FUN_088ebb10(void *, int, int);
int FUN_09c62c00(void *, int);
int FUN_089225ec(void *);
int FUN_08920c9c(void *);
u8 FUN_0891f6a4(void *, int, int);
int FUN_08929438(void *, int);

void FUN_08929668(u8 *state, signed char fixed)
{
    int i;
    u8 *entry = state + 0x16c;

    FUN_088ebb10(entry, 0, 0x54);
    for (i = 0; i < 6; i++, entry += 12) {
        int id = (signed char)state[10] * 6 + i;

        if (id == 4) {
            *(int *)entry = FUN_09c62c00(
                D_08aacea4, FUN_089225ec(state) == 0 ? 0xbf : 199);
        } else if (id == 0xb) {
            *(int *)entry = FUN_09c62c00(
                D_08aacea4, FUN_08920c9c(state) == 0 ? 0xc6 : 200);
        } else {
            *(int *)entry = FUN_09c62c00(D_08aacea4, (id + 0xbb) & 0xffff);
        }

        if (fixed == 0) {
            entry[5] = 1;
            entry[4] = FUN_0891f6a4(state, i, (signed char)state[0xb]);
        } else if (FUN_08929438(state, i) == 0) {
            entry[4] = 10;
            entry[5] = 1;
        } else {
            entry[5] = 0;
            entry[4] = 0;
        }
    }
}
