/*
 * FUN_08920be0: clear a variable table, reset metadata and recalculate layout.
 *
 * Main EBOOT, attempt-high-01 medium batch 11. Metadata roles are hypotheses.
 */

typedef unsigned char u8;typedef unsigned short u16;void FUN_0880c468(void *,int,unsigned);void FUN_089207c0(void *,void *,void *);
int FUN_08920be0(void *context,u8 *record,void *value)
{u8 count=record[10],rows,remainder;FUN_0880c468(record+0x2a,0,(unsigned)count<<2);record[4]=0xff;*(u16 *)(record+6)=0;record[0xf]=0;record[0xe]=0;rows=(count+0x74)/(unsigned)count;remainder=-(count*(rows-1));record[0x10]=rows;record[0x11]=remainder+0x75;record[0x14]=remainder+0x76;FUN_089207c0(context,record,value);return 1;}
