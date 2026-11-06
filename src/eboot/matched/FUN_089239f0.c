/*
 * FUN_089239f0: update a guarded global subsystem and rebuild it when empty.
 *
 * Main EBOOT, attempt-high-01 medium batch 13. Guard and subsystem roles are hypotheses.
 */

typedef unsigned char u8;typedef unsigned int u32;extern u8 *D_08aace80;extern void *D_08a3387c;extern void *D_09beb0bc;void FUN_088fa2b0(void *,int,int);int FUN_0886c880(void *);void FUN_0892393c(void *);int FUN_0886c990(void *);void FUN_08865328(void *);
void FUN_089239f0(void *record)
{if((*(u32 *)(D_08aace80+0x60474)&0x200)==0||*((u8 *)D_08a3387c+0x2978c)!=0)return;FUN_088fa2b0(D_09beb0bc,10,1);if(FUN_0886c880(D_08aace80)!=0){FUN_0892393c(record);if(FUN_0886c990(D_08aace80)==0)FUN_08865328(D_08a3387c);}}
