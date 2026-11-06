/* FUN_08923fb4: synchronize a global subsystem and optionally show its panel.
 * Main EBOOT, attempt-high-01 241-512 byte batch 11. Subsystem roles are hypotheses. */
typedef unsigned char u8;typedef unsigned int u32;extern u8 *D_08aace80,*D_09bb7a7c;int FUN_0886c880(void*);int FUN_0886c70c(void*,int);void FUN_0886c88c(void*);void FUN_0886c7f0(void*,int);int FUN_0886c75c(void*);void FUN_08921c40(void*);
int FUN_08923fb4(void *state){if((*(u32 *)(D_08aace80+0x60474)&0x200)!=0&&FUN_0886c880(D_08aace80)!=0){u8 *service;if(FUN_0886c70c(D_08aace80,1)==0)FUN_0886c88c(D_08aace80);FUN_0886c7f0(D_08aace80,1);service=D_08aace80;D_09bb7a7c[0x1e]=1;if(FUN_0886c75c(service)==0)return 0;if(FUN_0886c70c(D_08aace80,1)==0)FUN_08921c40(state);return 1;}return 0;}
