/* Purpose: return the first matching slot quantity for an identifier. */
extern void*D_08aace80;extern int FUN_088677a4(void*);
int FUN_0887e9c4(void*unused,unsigned int id){unsigned char*base=(unsigned char*)D_08aace80+0x85c,*slot=base;int count=FUN_088677a4(D_08aace80),i;(void)unused;if(count>0)for(i=0;i<count;i++,slot+=4){unsigned short current=*(unsigned short*)(slot+0x3048);if(current==(id&0xffff))return*((signed char*)0x089caf8e + current*0x14)==-1?999:*(short*)(base+0x304a+i*4);}return 0;}
