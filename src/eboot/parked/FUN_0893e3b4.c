/*
 * FUN_0893e3b4: find the first global table entry that does not match a key.
 *
 * Main EBOOT, attempt-high-01 medium batch 16. Table and key roles are hypotheses.
 */

typedef unsigned char u8;int FUN_0880bff4(void *,void *,int);
unsigned FUN_0893e3b4(int selector)
{u8 *global=*(u8 **)0x08ab4650,*key=*(u8 **)0x08ab4664+selector*8+0x50;signed char count=*(signed char *)(global+0x17af);unsigned index=0;if(count>0){do{if(FUN_0880bff4(key,global+(index&0xff)*0x14c+0x818,6)==0)return index;index++;}while(index!=(unsigned)count);}return -1;}
