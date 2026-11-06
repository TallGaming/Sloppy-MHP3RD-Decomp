/* Purpose: swap command buffers, reset synchronization, and rebuild packets. */
extern unsigned int FUN_08960cf8(void *,int,unsigned int,int);
extern void FUN_08960cc8(unsigned int,int);extern void FUN_0887526c(unsigned int*);
void FUN_08875318(unsigned int*object){object[0]^=1;FUN_08960cc8(FUN_08960cf8((void *)(0x089ca068+object[0]*0x30),0,0xffffffff,0),0);object[0x1c065]=(unsigned int)(object+object[0]*0xe000+0x65);FUN_0887526c(object);}
