/*
 * FUN_088a4edc: report whether an active-state flag is set.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 */
typedef unsigned char u8; int FUN_088a4da8(void);
int FUN_088a4edc(u8 *o){ return FUN_088a4da8()!=0 && (o[0x47c]&0x40)!=0; }
