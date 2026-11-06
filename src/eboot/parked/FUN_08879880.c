/* Purpose: release every child entry owned by an object. */
extern void FUN_088807fc(void*child);
void FUN_08879880(unsigned char*object){int i,count=*(unsigned short*)(object+0x68);for(i=0;i<count;i++)FUN_088807fc(*(void**)(object+0x58+i*4));}
