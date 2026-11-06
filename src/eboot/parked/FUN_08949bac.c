/* FUN_08949bac: test whether a record identifier occurs in a lookup list.
 * Main EBOOT, attempt-high-01 241-512 byte batch 18. Record roles are hypotheses. */
typedef unsigned char u8;
typedef unsigned short u16;

extern u8 *D_08a17f30[];

int FUN_08949ad8(void *, int, int);
int FUN_08949a08(void *);

int FUN_08949bac(void *state, signed char group, u16 *record)
{
    int mode;
    u8 *list;
    u16 value;

    if (group < 0 || group >= 0x4b || record == 0) {
        return 0;
    }
    if (FUN_08949ad8(state, group, record[3]) == 0) {
        return 0;
    }
    mode = FUN_08949a08(state);
    if (mode == 7) {
        return 0;
    }
    list = D_08a17f30[(group * 6 + mode)];
    if (list == 0) {
        return 0;
    }
    value = list[0];
    while (value != 0) {
        if (value == record[0]) {
            return 1;
        }
        list++;
        value = list[0];
    }
    return 0;
}
