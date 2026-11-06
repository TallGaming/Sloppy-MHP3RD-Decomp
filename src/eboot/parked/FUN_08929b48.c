/* FUN_08929b48: populate one of three menu-entry groups.
 * Main EBOOT, attempt-high-01 241-512 byte batch 14. Menu roles are hypotheses. */
typedef unsigned char u8;
typedef unsigned int u32;

extern u8 *D_08aace80;

void FUN_089277fc(void *, int, u8);
void FUN_088ebb10(void *, int, int);
void FUN_08923b14(void *, u8);
void FUN_08929a18(void *, u8);
void FUN_08929668(void *, u8);

void FUN_08929b48(u8 *state, int group, u8 fixed)
{
    switch (group) {
    case 1:
        FUN_089277fc(state, (signed char)state[0x1c5], fixed);
        break;
    case 2:
        FUN_088ebb10(state + 0x1d8, 0, 0x30);
        FUN_08923b14(state, fixed);
        break;
    case 0:
        if ((*(u32 *)(D_08aace80 + 0x60474) & 0x200) != 0) {
            FUN_08929668(state, fixed);
        } else {
            FUN_08929a18(state, fixed);
        }
        break;
    default:
        return;
    }
}
