/*
 * FUN_0893babc: refresh a linked object when its selected state changes.
 *
 * Main EBOOT, attempt-high-01 medium batch 15. Linked-object roles are hypotheses.
 */

typedef unsigned char u8;typedef unsigned short u16;typedef short s16;void *FUN_0893b898(void *,int);int FUN_0893b61c(void *,void *,int);
int FUN_0893babc(u8 *record)
{u8 *object=(u8 *)FUN_0893b898(record,2);s16 state;if(object==*(u8 **)(record+0xe8))return 0;if(object==0){if((u16)(*(s16 *)(record+0xec)-0x8c)<2)return 1;}else{state=*(s16 *)(*(u8 **)(object+0xc)+0xc24);if((u16)(state-0x8c)<2){if(FUN_0893b61c(record,*(void **)(object+0xc),*(signed char *)(record+0xd8))!=2)return 1;*(s16 *)(record+0xec)=state;*(u8 **)(record+0xe8)=object;}}return 0;}
