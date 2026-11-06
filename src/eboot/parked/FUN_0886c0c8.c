/* Purpose: count satisfied identifiers across the secondary list table. */
extern unsigned int FUN_08866614(void *object, unsigned short id);
int FUN_0886c0c8(void *object){short **list=(short**)0x089e2b84;short **end=(short**)0x089e2bb0;int count=0;do{short *item=*list;while(*item){count+=FUN_08866614(object,*item)!=0;if(item[1]==0)break;item+=2;count+=FUN_08866614(object,*item)!=0;}list++;}while(list!=end);return count;}
