/*
 * FUN_08919e34: decode a decimal selector into a primary record entry.
 *
 * Main EBOOT, attempt-high-01 medium batch 9. Selector encoding is a hypothesis.
 */

typedef unsigned char u8;void *FUN_0891d4c0(void *,int);
void *FUN_08919e34(void *context,short selector)
{int value=selector;u8 *group=(u8 *)FUN_0891d4c0(context,((value/10)%10)&0xff);return group+((value%10)&0xff)*0x30;}
