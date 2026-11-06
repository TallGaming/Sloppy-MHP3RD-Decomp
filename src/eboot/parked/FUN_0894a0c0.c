/* FUN_0894a0c0: refresh six availability flags for one selected record.
 * Main EBOOT, attempt-high-01 241-512 byte batch 18. Record roles are hypotheses. */
typedef unsigned char u8;

int FUN_08949bac(void *, int, void *);

void FUN_0894a0c0(int *state, signed char slot)
{
    int *record;
    char *selection;
    int *entry;
    int index;
    u8 available;

    if (slot < 0 || slot >= 2) {
        return;
    }
    record = state + slot * 3 + 0x1e;
    if ((signed char)record[1] == 0) {
        return;
    }
    selection = (char *)record[0];
    if (selection == 0) {
        *(u8 *)(record + 1) = 0;
        return;
    }
    entry = state;
    for (index = 0; index != 6; index++, entry += 5) {
        available = 0;
        if (entry[0] != 0 && *(signed char *)(entry[0] + 4) != 0) {
            available = FUN_08949bac(state, *selection, entry);
        }
        ((u8 *)record)[index + 6] = available;
    }
}
