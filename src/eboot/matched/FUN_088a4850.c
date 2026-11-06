/*
 * FUN_088a4850: rotate a state byte and restore value four when active.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 */
typedef unsigned char u8; int FUN_088a47e4(void *);
void FUN_088a4850(u8 *o){ u8 v=o[0x5d0]; o[0x5d0]=0; o[0xd84]=v; if((signed char)o[0x62]==4 && FUN_088a47e4(o)==1) o[0x5d0]=4; }
