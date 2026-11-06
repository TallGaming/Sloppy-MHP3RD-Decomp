/* Purpose: total the remaining value across all active slots. */
extern void*D_08aace80;extern int FUN_088677a4(void*);
int FUN_0887ee3c(void*unused,unsigned int id){unsigned char*slot=(unsigned char*)D_08aace80+0x38a4;int count=FUN_088677a4(D_08aace80),total=0,i;unsigned int value=*((unsigned char*)0x089caf8e + (id&0xffff)*0x14);(void)unused;if(value==0xff)value=99;for(i=0;i<count;i++,slot+=4){short amount=*(short*)(slot+2);if(amount==0)total+=value;else if(*(unsigned short*)slot==(id&0xffff))total+=value-amount;}return total;}
