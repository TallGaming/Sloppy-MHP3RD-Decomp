/* FUN_08929a18: populate seven resource entries and their availability flags.
 * Main EBOOT, attempt-high-01 241-512 byte batch 13. Entry roles are hypotheses. */
typedef unsigned char u8;

extern void *D_09e5e1a8;

void FUN_088ebb10(void *, int, int);
int FUN_09c9aba0(void *, int);
u8 FUN_0891f6a4(void *, int, int);
int FUN_08929840(void *, int);

void FUN_08929a18(u8 *state, signed char fixed)
{
    int i;
    u8 *entry = state + 0x16c;

    FUN_088ebb10(entry, 0, 0x54);
    for (i = 0; i < 7; i++, entry += 12) {
        *(int *)entry = FUN_09c9aba0(
            D_09e5e1a8,
            ((signed char)state[10] * 7 + i + 0x1d5) & 0xffff);
        if (fixed == 0) {
            entry[5] = 1;
            entry[4] = FUN_0891f6a4(state, i, (signed char)state[0xb]);
        } else if (FUN_08929840(state, i) == 0) {
            entry[5] = 1;
            entry[4] = 10;
        } else {
            entry[5] = 0;
            entry[4] = 0;
        }
    }
}
