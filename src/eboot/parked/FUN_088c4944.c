/*
 * FUN_088c4944: select one byte from a mode-specific five-byte table record.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: collapsed table selection is much shorter than the reference branching.
 */
typedef unsigned char u8; extern u8 **PTR_DAT_089e3c4c[]; extern u8 D_089e3c09[];
u8 FUN_088c4944(void *unused,unsigned a,unsigned b,int mode){int index=(u8)PTR_DAT_089e3c4c[a&0xff][(b&0xff)*6+4]*5;if(mode>=0&&mode<=3)return D_089e3c09[index+mode];return 0;}
