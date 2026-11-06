/* FUN_0894b81c: locate the first active record and derive its grid position.
 * Main EBOOT, attempt-high-01 241-512 byte batch 19. Record roles are hypotheses. */
typedef unsigned char u8;

extern u8 *D_08aace80;
int FUN_08906550(void *);
int FUN_0890681c(void *, int);
int FUN_0894abd4(void *);

void FUN_0894b81c(u8 *state)
{
    u8 *record = D_08aace80 + 0x5daec;
    int index;
    int width;

    for (index = 0; index != 5; index++, record += 0xa0) {
        if (FUN_08906550(record) != 0 && FUN_0890681c(record, 1) != 0) {
            goto found;
        }
    }
    record = D_08aace80 + 0x5daec;
    for (index = 0; index != 5; index++, record += 0xa0) {
        if (FUN_08906550(record) != 0 && FUN_0890681c(record, 2) != 0) {
            goto found;
        }
    }
    record = D_08aace80 + 0x5daec;
    for (index = 0; index != 0x19; index++, record += 0xa0) {
        if (FUN_08906550(record) != 0) {
            goto found;
        }
    }
    *(int *)(state + 0x4a58) = -1;
    state[9] = 0;
    state[8] = 0;
    return;

found:
    *(int *)(state + 0x4a58) = index;
    width = FUN_0894abd4(state);
    state[9] = index / width;
    state[8] = index % width;
}
