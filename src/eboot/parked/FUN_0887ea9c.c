/* Purpose: sum all matching slot quantities for an identifier. */
extern void*D_08aace80;extern int FUN_088677a4(void*);
int FUN_0887ea9c(void*unused,unsigned int id){unsigned char*slot=(unsigned char*)D_08aace80+0x85c;int count=FUN_088677a4(D_08aace80),sum=0,i;(void)unused;for(i=0;i<count;i++,slot+=4)if(*(unsigned short*)(slot+0x3048)==(id&0xffff)){if(*((signed char*)0x089caf8e + (id&0xffff)*0x14)==-1)return 999;sum+=*(short*)(slot+0x304a);}return sum;}
