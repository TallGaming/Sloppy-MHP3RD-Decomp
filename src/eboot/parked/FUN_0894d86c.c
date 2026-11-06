/* FUN_0894d86c: build a filtered item list from a large record table.
 * Main EBOOT, attempt-high-01 241-512 byte batch 20. Record roles are hypotheses. */
typedef unsigned char u8;
typedef unsigned short u16;

extern u8 D_089caf90;
extern u8 *D_08aace80;
void FUN_088ebb10(void *, int, int);
int FUN_0894d5d8(void *, int);
int FUN_08867d40(void *, int);
int FUN_08867d54(void *, int);

void FUN_0894d86c(u8 *state)
{
    u8 *entry = state + 0x65c;
    u8 *record = &D_089caf90;
    int index;

    *(int *)(state + 0xc9c) = 0;
    FUN_088ebb10(entry, 0, 0x640);
    for (index = 0; index != 0x3d3; index++, record += 0x14) {
        int count;

        if (*record != '9') {
            continue;
        }
        *(int *)entry = 0;
        if (FUN_0894d5d8(state, index) == 0) {
            *(int *)(entry + 4) = FUN_08867d40(D_08aace80, 0x221);
            entry[8] = 4;
        } else {
            *(int *)(entry + 4) = FUN_08867d54(D_08aace80, index);
            entry[8] = 0;
        }
        entry[9] = 0;
        *(u16 *)(entry + 10) = 0;
        *(u16 *)(entry + 12) = index;
        count = *(int *)(state + 0xc9c);
        *(u16 *)(entry + 14) = count;
        entry += 16;
        *(int *)(state + 0xc9c) = count + 1;
    }
}
