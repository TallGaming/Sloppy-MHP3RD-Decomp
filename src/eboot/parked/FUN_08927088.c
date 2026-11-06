/*
 * FUN_08927088: submit two values when the active object exists.
 *
 * Main EBOOT, attempt-high-01 medium batch 13. Submission role is a hypothesis.
 */

typedef unsigned char u8;typedef unsigned short u16;extern u8 *D_08aace80;void *FUN_088b51b8(void *,int,int);void FUN_088c1380(void *,int,int);
void FUN_08927088(void *unused,u16 first,short second)
{if(FUN_088b51b8(*(void **)0x09bb7a80,D_08aace80[0x26],1)==0)return;FUN_088c1380(*(void **)0x09bb7b60,first,second);}
