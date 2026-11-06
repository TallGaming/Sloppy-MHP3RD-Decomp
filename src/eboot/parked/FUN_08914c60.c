/*
 * FUN_08914c60: submit each enabled child record while the overlay is ready.
 *
 * Main EBOOT, attempt-high-01 medium batch 6. Record roles are hypotheses.
 */

typedef unsigned char u8;typedef unsigned int u32;extern void *D_08a31e8c;void FUN_08856638(void *,int,void *,void *,int);
void FUN_08914c60(u8 *record)
{int index;if(((int (*)(void))0x09c02010)()==0)return;for(index=0;index<record[0x55];index++){u8 *child=*(u8 **)(record+0x58)+index*0x30;if((*(u32 *)(child+4)&4)==0)FUN_08856638(D_08a31e8c,8,child,child+0x10,0);}}
