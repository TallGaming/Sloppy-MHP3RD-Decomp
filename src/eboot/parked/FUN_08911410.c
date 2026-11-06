/*
 * FUN_08911410: allocate, configure and enqueue a command record.
 *
 * Main EBOOT, attempt-high-01 medium batch 6. Record roles are hypotheses.
 */

typedef unsigned char u8;typedef unsigned short u16;typedef unsigned int u32;
int FUN_0895617c(void *);void FUN_08955fb4(void *,void *);
int FUN_08911410(int value,char mode)
{u8 *item=(u8 *)FUN_0895617c(*(void **)0x09bf5260);if(item==0)return -1;*(int *)(item+0x64)=0x2c;*(int *)(item+0x68)=mode==0?0x42:0x43;item[0x203]=1;*(u16 *)(item+0x200)=1;*(int *)(item+0xc)=value;item[0x34]=mode;item[0x202]=0;*(u16 *)(item+0x204)=0;item[0x210]=0;((void (*)(void *))0x09c01d84)(item);*(u32 *)(item+0x48)|=4;FUN_08955fb4(*(void **)0x09bf5260,item);return *(int *)(item+0x30);}
