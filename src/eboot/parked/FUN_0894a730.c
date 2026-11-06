/*
 * FUN_0894a730: refresh a record unless the selected slot is blocked.
 *
 * Main EBOOT, attempt-high-01 medium batch 17. Slot and blocker roles are hypotheses.
 */

typedef unsigned char u8;typedef unsigned int u32;extern u8 *D_08aace80;extern u8 *D_09bc1ed8;void FUN_0894a470(void *);
void FUN_0894a730(u8 *record,signed char selector)
{u8 *slot=record+0x78+selector*0xc;signed char index;if(*(signed char *)(slot+4)==0)return;if((*(u32 *)(D_09bc1ed8+0x10fa354)&1)!=0&&D_08aace80[0x6ba]!=D_08aace80[0x26])return;index=*(signed char *)(slot+5);if(index!=-1&&*(signed char *)(record+index*0x14+0x10)==15)return;FUN_0894a470(record);}
