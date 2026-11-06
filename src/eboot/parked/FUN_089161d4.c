/*
 * FUN_089161d4: apply two table-selected triples to an embedded controller.
 *
 * Main EBOOT, attempt-high-01 medium batch 7. Table roles are hypotheses.
 */

typedef unsigned char u8;void FUN_0889dc3c(void *,int,int,int,int);void FUN_0889dd0c(void *,int,int,int,int);
void FUN_089161d4(u8 *record,unsigned index)
{int offset=(index&0xff)*7;u8 *table=(u8 *)0x089c725d;FUN_0889dc3c(record+0xdf0,0,table[offset],table[offset+1],table[offset+2]);FUN_0889dd0c(record+0xdf0,0,table[offset+3],table[offset+4],table[offset+5]);}
