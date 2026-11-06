/*
 * FUN_08917d38: refresh identifiers in a sentinel-terminated record group.
 *
 * Main EBOOT, attempt-high-01 medium batch 8. Table roles are hypotheses.
 */

typedef unsigned char u8;typedef short s16;void *FUN_0891d4c0(void *,int);
void FUN_08917d38(void *context)
{u8 *entry=(u8 *)FUN_0891d4c0(context,0),*table=(u8 *)0x08a33e70;if(entry!=0&&*(s16 *)entry!=-1){do{*(s16 *)(entry+0x24)=*(s16 *)(table+0x30);entry+=0x30;table+=8;}while(*(s16 *)entry!=-1);}}
