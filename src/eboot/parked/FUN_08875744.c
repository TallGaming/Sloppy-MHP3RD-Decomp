/* Purpose: append words to the active command buffer and submit the packet. */
extern void FUN_088756e8(int*,unsigned int*);
unsigned int FUN_08875744(int*object,unsigned int*source,int count,unsigned int slot){unsigned int*start,*out;int i;if(slot>=0x14)return 0;start=(unsigned int*)object[0x1c065];if((unsigned int)(((start-(unsigned int*)(object+object[0]*0xe000+0x65)))+count)>=0xe000)return 0;out=start;for(i=0;i<count;i++)*out++=*source++;object[0x1c065]=(int)out;FUN_088756e8(object,start);return 1;}
