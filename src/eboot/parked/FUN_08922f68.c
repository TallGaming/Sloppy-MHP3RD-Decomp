/* FUN_08922f68: initialize a menu state and choose its panel count.
 * Main EBOOT, attempt-high-01 241-512 byte batch 11. Menu roles are hypotheses. */
typedef unsigned char u8;typedef unsigned int u32;extern u8 *D_08aace80;void FUN_08922ddc(void*);void FUN_0891f02c(void*,int,int,int,int,int);void FUN_0891f064(void*,int);
int FUN_08922f68(u8 *state){state[0x15]=2;state[0x1c0]=0;state[0x1c1]=0;state[0x1c5]=3;state[0x1c6]=0;state[0x4ba]=0;FUN_08922ddc(state);state[0x4bb]=(*(u32 *)(D_08aace80+0x60474)&0x200)==0?3:4;FUN_0891f02c(state,0,-1,0,0,0);FUN_0891f064(state,-1);return 1;}
