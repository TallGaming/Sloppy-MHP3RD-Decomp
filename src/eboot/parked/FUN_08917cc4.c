/*
 * FUN_08917cc4: number entries in a sentinel-terminated record group.
 *
 * Main EBOOT, attempt-high-01 medium batch 7. Entry roles are hypotheses.
 */

typedef unsigned char u8;typedef short s16;void *FUN_0891d4c0(void *,int);
void FUN_08917cc4(void *context)
{u8 *entry=(u8 *)FUN_0891d4c0(context,0);s16 index=0;if(entry!=0&&*(s16 *)entry!=-1){do{entry[0x2b]=(u8)index;*(s16 *)(entry+0x20)=index;index++;entry+=0x30;}while(*(s16 *)entry!=-1);}}
