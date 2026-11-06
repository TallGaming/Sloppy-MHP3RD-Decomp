/*
 * FUN_08922528: retry a global availability query twice when no blockers are active.
 *
 * Main EBOOT, attempt-high-01 medium batch 12. Blocker roles are hypotheses.
 */

typedef unsigned int u32;typedef unsigned short u16;extern unsigned char *D_08aace80;extern void *D_09bb7e90;int FUN_088cca4c(void *);int FUN_088bdf28(void *);int FUN_088bd0f4(void *,int);
int FUN_08922528(void *unused,u16 value)
{void *manager=*(void **)0x09bb7b60;int count;if((*(u32 *)(D_08aace80+0x60474)&1)!=0||FUN_088cca4c(D_09bb7e90)!=0||FUN_088bdf28(manager)!=0)return 0;count=2;do{count--;if(FUN_088bd0f4(manager,value)>0)return 1;}while(count!=0);return 0;}
