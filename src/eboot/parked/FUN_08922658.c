/*
 * FUN_08922658: start a global operation for an eligible positive selector.
 *
 * Main EBOOT, attempt-high-01 medium batch 12. Operation roles are hypotheses.
 */

typedef unsigned char u8;extern void *D_08aace80;int FUN_089225ec(void);int FUN_0886ea58(void *,int);
int FUN_08922658(u8 *record,short selector)
{u8 *global;if(FUN_089225ec()==0||selector<=0||FUN_0886ea58(D_08aace80,selector)==0||record[0x573]!=0)return 0;global=*(u8 **)0x09e73180;if(*(signed char *)(global+0xe)!=0)return 2;if(((int (*)(void *,int))0x09e7132c)(global,selector)!=0){record[0x573]=1;return 1;}return 0;}
