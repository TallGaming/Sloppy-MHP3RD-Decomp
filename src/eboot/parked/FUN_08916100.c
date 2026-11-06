/*
 * FUN_08916100: refresh four half-word values in a record.
 *
 * Main EBOOT, attempt-high-01 medium batch 7. Field roles are hypotheses.
 */

typedef unsigned char u8;typedef unsigned short u16;extern void *D_08aace80;int FUN_08868c78(void *,int,int);
void FUN_08916100(u8 *record)
{int index=0;u8 *cursor=record;do{u16 value=FUN_08868c78(D_08aace80,record[0x63],index);*(u16 *)(cursor+0x4e6)=value;cursor+=2;index++;}while(index!=4);}
