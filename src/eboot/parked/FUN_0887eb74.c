/* Purpose: compute remaining capacity across all identifier slots. */
extern void*D_08aace80;extern int FUN_088677a4(void*);
int FUN_0887eb74(void*unused,unsigned int id){unsigned char*slot=(unsigned char*)D_08aace80+0x85c;int count,total=0,i;(void)unused;id&=0xffff;if(id==0||*((signed char*)0x089caf8e + id*0x14)==-1)return 0;count=FUN_088677a4(D_08aace80);for(i=0;i<count;i++,slot+=4){unsigned short current=*(unsigned short*)(slot+0x3048);if(current==id)total=total-*(short*)(slot+0x304a)+99;else if(current==0)total+=99;}return total;}
