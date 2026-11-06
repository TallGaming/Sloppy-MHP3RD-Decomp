/* Purpose: resolve a table entry and dispatch its selected resource. */
extern void FUN_08867c30(unsigned int,unsigned int,unsigned short);void FUN_08871f98(void*o,unsigned short id){unsigned int mode=(*(unsigned int*)((unsigned char*)o+0x60474)&8)?1:3;FUN_08867c30(0,mode,id);}
