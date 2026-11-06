/* Purpose: count satisfied identifiers across two numeric ranges. */
extern unsigned int FUN_08866614(void *object, unsigned short id);
int FUN_0886c198(void *object){int count=0,id;for(id=0x9ca5;id<0x9cac;id++)count+=FUN_08866614(object,id)!=0;for(id=0x9d09;id<0x9d1d;id++)count+=FUN_08866614(object,id)!=0;return count;}
