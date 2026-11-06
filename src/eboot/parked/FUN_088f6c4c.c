/* Find a named record in a selected object list. Names and layout are hypotheses. */
typedef unsigned int u32; typedef unsigned short u16;
void FUN_0880c088(void*,const void*,int); int FUN_08880858(void*,void*,int); extern void*D_089f6a60[];
u32 FUN_088f6c4c(void*unused,char*base,u32 kind,int name){char key[16];char*p=base+(kind&255)*0x80+0xf70;char*record=*(char**)(p+0x58);u32 i;FUN_0880c088(key,D_089f6a60[name],8);for(i=0;i<*(u32*)(p+0x6c);i++,record+=0x280)if(FUN_08880858(record,key,5))return *(u16*)(record+0x116);return -1;}
