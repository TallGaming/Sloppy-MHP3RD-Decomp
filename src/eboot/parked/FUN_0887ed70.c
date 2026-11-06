/* Purpose: test whether an identifier has a slot quantity within a limit. */
extern void*D_08aace80;extern int FUN_088677a4(void*);
unsigned int FUN_0887ed70(void*unused,short id,int limit){short*slot=(short*)((unsigned char*)D_08aace80+0x38a4);int count,i;(void)unused;if(id==0)return 1;count=FUN_088677a4(D_08aace80);for(i=0;i<count;i++,slot+=2)if(slot[0]==id&&slot[1]<=limit)return 1;return 0;}
