/*
 * FUN_088a4e64: report a special state-six flag combination.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 */
typedef unsigned char u8; int FUN_088a4da8(void);
int FUN_088a4e64(u8 *o){ return FUN_088a4da8()!=0 && (signed char)o[0x62]==6 && (o[0x47c]&0x10)!=0; }
