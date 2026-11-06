/* FUN_08945d34: render ten records from the selected page.
 * Main EBOOT, attempt-high-01 241-512 byte batch 17. Record roles are hypotheses. */
typedef unsigned char u8;

extern void *D_09beb0bc;
extern u8 *D_08a31df0;
extern int D_08a1709c;
extern u8 D_08a16f94;
extern u8 D_08a16f96;
extern short D_08a173f0;
extern short D_08a173f2;

void FUN_088fa2b0(void *, int, int);
void FUN_08850ff8(void *, int, int, void *);
void FUN_08851480(void *, void *, void *, int, int);
void FUN_08900c98(void *, int, int, void *, int, int);

void FUN_08945d34(u8 *state)
{
    int index;
    int count;
    u8 *record;

    if ((signed char)state[0x20f] > 0) {
        state[0x20f] = (signed char)state[0x20f] - 1;
        return;
    }
    FUN_088fa2b0(D_09beb0bc, 7, 1);
    FUN_08850ff8(D_08a31df0, *(int *)(state + 0x200),
                 *(int *)(state + 0x204), &D_08a1709c);
    index = (signed char)state[0x20c] * 10 - 10;
    record = state + 0x158 + index * 4;
    count = 10;
    do {
        int slot = (index % 10 + 0x20) * 0x24;
        FUN_08851480(D_08a31df0, record, &D_08a1709c,
                     *(short *)(&D_08a16f94 + slot),
                     *(short *)(&D_08a16f96 + slot));
        record += 4;
        index++;
        count--;
    } while (count != 0);
    FUN_088fa2b0(D_09beb0bc, 8, 1);
    FUN_08900c98(state, (signed char)state[0x20c] - 1,
                 (short)(signed char)state[0x20d], &D_08a1709c,
                 D_08a173f0, D_08a173f2);
}
