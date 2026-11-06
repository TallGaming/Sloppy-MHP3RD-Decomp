/*
 * FUN_0894a7d4: update six slot masks and run two follow-up passes.
 *
 * Main EBOOT, attempt-high-01 medium batch 17. Slot and mask roles are hypotheses.
 */

typedef unsigned char u8;extern u8 *D_08aace80;void FUN_08949dc0(void *,int);void FUN_0894a730(void *,int);
void FUN_0894a7d4(u8 *record)
{unsigned bit=0,offset=0;int index;if(*(signed char *)(record+0x90)==0)return;do{if(*(signed char *)(D_08aace80+offset+0x30)==0){u8 *slot=record;index=0;do{index++;slot[0x10]|=(u8)(1<<(bit&31));slot+=0x14;}while(index!=6);}bit++;offset+=0xfc;}while(bit!=4);index=0;do{FUN_08949dc0(record,index);index++;}while(index!=6);index=0;do{FUN_0894a730(record,index);index++;}while(index!=2);}
