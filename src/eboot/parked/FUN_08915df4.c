/*
 * FUN_08915df4: choose the next record state and invoke its optional handler.
 *
 * Main EBOOT, attempt-high-01 medium batch 7. State roles are hypotheses.
 */

typedef unsigned char u8;typedef unsigned int u32;
void FUN_08915df4(u32 *record)
{u8 *linked=(u8 *)record[0x19];if(linked==0||linked[0x32]==0||(record[0x12]&2)!=0){record[0x17]=0x20;record[0x18]=1;return;}((void (*)(void))(*(u32 **)(record[0]))[7])();record[0x18]=1;record[0x17]=0x1c;}
