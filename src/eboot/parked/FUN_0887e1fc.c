/* Purpose: find the active slot whose pair matches an identifier. */
extern void*D_08aace80;extern int FUN_088677a4(void*);
unsigned int FUN_0887e1fc(void*unused,short id){unsigned int i=0;unsigned char*slot=(unsigned char*)D_08aace80+0x85c;(void)unused;if(id!=-1&&FUN_088677a4(D_08aace80)>0)do{if(*(short*)(slot+0x3048)==id&&*(short*)(slot+0x304a)>0)return i&0xffff;i++;slot+=4;}while((int)i<FUN_088677a4(D_08aace80));return 0xffff;}
