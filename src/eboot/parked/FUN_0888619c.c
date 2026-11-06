/* Purpose: build two adjacent object blocks using temporary work buffers. */
extern void FUN_08835328(void*);extern void FUN_0888609c(void*,int,void*,int,void*,void*,void*);extern void FUN_08885ee4(void*,int,void*,int,void*,void*);
void FUN_0888619c(unsigned char*object){unsigned char first[144],second[336];int index=*(signed char*)(object+0x17ad);FUN_08835328(first);FUN_0888609c(object,index,object+0x2e8,0x14c,object+0x2e8,second,first);FUN_08885ee4(object,index-1,object+0x434,0x14c,object+0x434,second);}
