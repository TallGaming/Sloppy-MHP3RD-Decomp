/* Purpose: find an entry index by its leading identifier. */
extern void*D_08aace80;extern short*FUN_0886cae0(void*,unsigned int);
unsigned int FUN_0887f328(void*unused,short id){unsigned int i,count=*((unsigned char*)D_08aace80+0x60b84);(void)unused;for(i=0;i<count;i++)if(*FUN_0886cae0(D_08aace80,i)==id)return i&0xffff;return 0xffff;}
