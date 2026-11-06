/*
 * FUN_088a47e4: report whether a selected state exists and its flag is set.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: boolean form matches size with two prologue operation differences.
 */
typedef unsigned char u8; int FUN_088a3984(void *,int);
int FUN_088a47e4(u8 *o){ return FUN_088a3984(o,0)!=0 && (o[0x47c]&0x20)!=0; }
