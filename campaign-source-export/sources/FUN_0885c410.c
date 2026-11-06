/* Purpose: return the word field in the selected static record layout. */
typedef unsigned char u8;
typedef unsigned short u16;

extern const unsigned D_08980144[][10];
extern const unsigned D_0897dffc[][10];
extern const unsigned D_08984dac[][10];
extern const unsigned D_08986f1c[][10];
extern const unsigned D_089825ac[][10];
extern const unsigned D_08992168[][7];
extern const unsigned D_0898fa78[][7];
extern const unsigned D_0898e71c[][7];
extern const unsigned D_08990d64[][7];
extern const unsigned D_0898ab2c[][20];
extern const unsigned D_0898c01c[][20];
extern const unsigned D_08991800[][7];
extern const unsigned D_0898d5d4[][7];
extern const unsigned D_089904dc[][7];
extern const unsigned D_089891dc[][20];
extern const unsigned D_0898f164[][7];
extern const unsigned D_0898ddb4[][7];

unsigned FUN_0885c410(void *unused, u8 category, u16 index)
{
    (void)unused;
    switch (category) {
    case 0: return D_08980144[index][2];
    case 1: return D_0897dffc[index][2];
    case 2: return D_08984dac[index][2];
    case 3: return D_08986f1c[index][2];
    case 4: return D_089825ac[index][2];
    case 5: return D_08992168[index][1];
    case 6: return D_0898fa78[index][1];
    case 7: return D_0898e71c[index][1];
    case 8: return D_08990d64[index][1];
    case 9: return D_0898ab2c[index][2];
    case 10:
    case 11: return D_0898c01c[index][2];
    case 12: return D_08991800[index][1];
    case 13: return D_0898d5d4[index][1];
    case 14: return D_089904dc[index][1];
    case 16: return D_0898f164[index][1];
    case 17: return D_0898ddb4[index][1];
    case 15: return D_089891dc[index][2];
    default: return 9999999;
    }
}
