/*
 * FUN_0885c144 resolves the record addressed by a selector byte and a
 * low-halfword index.  Its first lane is forwarded by callers but has no
 * observed use in this table-only resolver.
 */
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

const u8 *FUN_0885c144(void *unused, u8 category, u16 index)
{
    (void)unused;
    switch (category) {
    case 0:  return D_08980144[index];
    case 1:  return D_0897dffc[index];
    case 2:  return D_08984dac[index];
    case 3:  return D_08986f1c[index];
    case 4:  return D_089825ac[index];
    case 5:  return D_08992168[index];
    case 6:  return D_0898fa78[index];
    case 7:  return D_0898e71c[index];
    case 8:  return D_08990d64[index];
    case 9:  return D_0898ab2c[index];
    case 10:
    case 11: return D_0898c01c[index];
    case 12: return D_08991800[index];
    case 13: return D_0898d5d4[index];
    case 14: return D_089904dc[index];
    case 16: return D_0898f164[index];
    case 17: return D_0898ddb4[index];
    case 15: return D_089891dc[index];
    default: return 0;
    }
}
