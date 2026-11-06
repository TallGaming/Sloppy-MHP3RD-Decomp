/* Read the selected unsigned byte from a category's static record table. */
typedef unsigned char u8;
typedef unsigned short u16;

extern const u8 D_08980144[][40];
extern const u8 D_0897dffc[][40];
extern const u8 D_08984dac[][40];
extern const u8 D_08986f1c[][40];
extern const u8 D_089825ac[][40];
extern const u8 D_08992168[][28];
extern const u8 D_0898fa78[][28];
extern const u8 D_0898e71c[][28];
extern const u8 D_08990d64[][28];
extern const u8 D_0898ab2c[][80];
extern const u8 D_0898c01c[][80];
extern const u8 D_08991800[][28];
extern const u8 D_0898d5d4[][28];
extern const u8 D_089904dc[][28];
extern const u8 D_089891dc[][80];
extern const u8 D_0898f164[][28];
extern const u8 D_0898ddb4[][28];

u8 FUN_0885b8cc(void *unused, u8 selector, u16 index)
{
    switch (selector) {
    case 0:
        return D_08980144[index][5];
    case 1:
        return D_0897dffc[index][5];
    case 2:
        return D_08984dac[index][5];
    case 3:
        return D_08986f1c[index][5];
    case 4:
        return D_089825ac[index][5];
    case 5:
        return D_08992168[index][2];
    case 6:
        return D_0898fa78[index][2];
    case 7:
        return D_0898e71c[index][2];
    case 8:
        return D_08990d64[index][2];
    case 9:
        return D_0898ab2c[index][2];
    case 10:
    case 11:
        return D_0898c01c[index][2];
    case 12:
        return D_08991800[index][2];
    case 13:
        return D_0898d5d4[index][2];
    case 14:
        return D_089904dc[index][2];
    case 16:
        return D_0898f164[index][2];
    case 17:
        return D_0898ddb4[index][2];
    case 15:
        return D_089891dc[index][2];
    default:
        return 0;
    }
}
