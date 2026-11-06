/*
 * FUN_08915398: find a queued item by identifier and mark it for state 15.
 *
 * Main EBOOT, attempt-high-01 medium batch 7. Queue roles are hypotheses.
 */

typedef unsigned char u8;typedef unsigned short u16;typedef unsigned int u32;
void FUN_08915398(u8 *record)
{u8 *queue=*(u8 **)0x09bf5260,*item;u8 index=0;if(*(int *)(record+0xb4)==-1)return;item=*(u8 **)(queue+0x2c);if(*(int *)(queue+0x30)<1||item==0)return;do{if(*(int *)(record+0xb4)==*(int *)(item+0x30)){*(u16 *)(item+0x76)=15;*(u32 *)(item+0x48)|=0x800;return;}index++;item=*(u8 **)(item+4);}while(index<*(int *)(queue+0x30)&&item!=0);}
