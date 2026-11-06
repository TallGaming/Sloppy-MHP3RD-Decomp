/*
 * FUN_0891cb74: add global and requested bits to an active record mask.
 *
 * Main EBOOT, attempt-high-01 medium batch 9. Mask roles are hypotheses.
 */

typedef unsigned char u8;extern u8 *D_08aace80;void FUN_0891cabc(void *,u8,unsigned short,unsigned short,unsigned short,signed char);
void FUN_0891cb74(u8 *record,unsigned bit)
{unsigned value;u8 mask;if(*(signed char *)(record+8)==0)return;value=((1<<(D_08aace80[0x26]&31))&0xff)|record[0xe];mask=(u8)value;record[0xe]=mask;if(((~value>>(bit&31))&1)!=0){record[0xe]=mask|(u8)(1<<(bit&31));FUN_0891cabc(record,0x27,0,0,0,0);}}
