/*
 * FUN_0891560c: allocate, initialize, enqueue and publish an effect record.
 *
 * Main EBOOT, attempt-high-01 medium batch 7. Record roles are hypotheses.
 */

typedef unsigned char u8;typedef unsigned int u32;
int FUN_089565fc(void *);void FUN_08955fb4(void *,void *);void FUN_088cc8a4(void *,int,int,int,int,int,int,void *,int,int,int);
void FUN_0891560c(u8 *source,int value)
{u8 *item=(u8 *)FUN_089565fc(*(void **)0x09bf5260);u32 *src,*dst;if(item==0)return;((void (*)(void *))0x09c01d84)(item);*(int *)(item+0x64)=(int)source;*(int *)(item+0xb0)=value;item[0x56]=source[0x30];src=(u32 *)(source+0x10);dst=(u32 *)(item+0x20);dst[0]=src[0];dst[1]=src[1];dst[2]=src[2];dst[3]=src[3];*(float *)(item+0x24)+=*(float *)0x08969a60;FUN_08955fb4(*(void **)0x09bf5260,item);FUN_088cc8a4(*(void **)0x09bb7e78,3,0x43,0,6,-1,-1,item+0x20,0,0,0);}
