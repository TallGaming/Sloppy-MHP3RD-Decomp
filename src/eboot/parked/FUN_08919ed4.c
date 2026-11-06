/*
 * FUN_08919ed4: test whether a decoded group contains an eligible entry.
 *
 * Main EBOOT, attempt-high-01 medium batch 9. Group fields are hypotheses.
 */

typedef unsigned char u8;typedef short s16;void *FUN_0891d4c0(void *,int);
int FUN_08919ed4(u8 *record,u8 *candidate)
{s16 quotient=*(s16 *)(candidate+0xd14)/10;signed char group_index=(signed char)quotient-(signed char)(quotient/10)*10;u8 *entry;if(group_index==*(signed char *)(record+0x94)-1)return 0;entry=(u8 *)FUN_0891d4c0(record,group_index);if(entry==0||*(s16 *)entry==-1)return 1;while(*(signed char *)(entry+4)<1){if(*(s16 *)(entry+0x30)==-1)return 1;entry+=0x30;}return 0;}
