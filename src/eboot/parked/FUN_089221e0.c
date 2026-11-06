/*
 * FUN_089221e0: copy three global settings into a record with one conversion.
 *
 * Main EBOOT, attempt-high-01 medium batch 12. Setting roles are hypotheses.
 */

typedef unsigned char u8;extern u8 *D_08aace80;int FUN_08921f78(void *,int);
void FUN_089221e0(u8 *record)
{record[0x8e2]=D_08aace80[0x5fbdf];record[0x8e3]=(u8)FUN_08921f78(record,*(signed char *)(D_08aace80+0x5fbd5));record[0x8e4]=D_08aace80[0x5fbd9];}
