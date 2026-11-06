/* Purpose: find an entry by its leading short and return its associated short. */
extern void*D_08aace80;extern short*FUN_0886cae0(void*,unsigned int);
int FUN_0886ea58(void*object,short value){unsigned int i;unsigned char count=*((unsigned char*)D_08aace80+0x60b84);for(i=0;i<count;i++){short*entry=FUN_0886cae0(object,i);if(entry[0]==value)return entry[1];}return 0;}
