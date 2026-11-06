/*
 * FUN_0891f2e8: forward a value to selected channels from an input mask.
 *
 * Main EBOOT, attempt-high-01 medium batch 11. Channel roles are hypotheses.
 */

typedef unsigned char u8;unsigned FUN_0883bd58(void);void FUN_088fb378(void *,int,int);
void FUN_0891f2e8(u8 *record,u8 value)
{unsigned mask=FUN_0883bd58();if((mask&0x80)!=0)FUN_088fb378(record+0x35c,0,value);if((mask&0x20)==0)return;FUN_088fb378(record+0x35c,1,value);}
