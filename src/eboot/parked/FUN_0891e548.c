/*
 * FUN_0891e548: reset two pairs of vector arrays and their global selectors.
 *
 * Main EBOOT, attempt-high-01 medium batch 10. Array roles are hypotheses.
 */

typedef unsigned char u8;typedef unsigned int u32;void FUN_0880c468(void *,int,unsigned);
void FUN_0891e548(u8 *record)
{int outer=0;((void (*)(void))0x09c02058)();*(u32 *)record=0x0896b928;do{FUN_0880c468(record+0x70+outer*0xa0,0,0xa0);FUN_0880c468(record+0x1b0+outer*0x140,0,0x140);record[0x431+outer]=0;outer++;}while(outer!=2);record[0x430]=0xff;*(u8 *)0x08a05750=0xff;*(u8 *)0x08a05753=0xff;*(u8 *)0x08a05752=0xff;*(u8 *)0x08a05751=0xff;}
