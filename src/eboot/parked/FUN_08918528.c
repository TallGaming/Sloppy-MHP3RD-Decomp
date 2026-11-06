/*
 * FUN_08918528: refresh identifiers in two sentinel-terminated record groups.
 *
 * Main EBOOT, attempt-high-01 medium batch 8. Table and layout roles are hypotheses.
 */

typedef unsigned char u8;typedef short s16;void *FUN_0891d4c0(void *,int);void *FUN_0891d510(void *);
void FUN_08918528(void *context)
{u8 *first=(u8 *)FUN_0891d4c0(context,0),*entry,*table;if(first!=0){if(*(s16 *)first!=-1){entry=first;table=(u8 *)0x08a33e70;do{*(s16 *)(entry+0x24)=*(s16 *)(table+0x30);entry+=0x30;table+=8;}while(*(s16 *)entry!=-1);}entry=(u8 *)FUN_0891d510(context);if(entry!=0&&*(s16 *)(entry+4)!=-1){table=(u8 *)0x08a33e70;do{*(s16 *)(entry+0x28)=*(s16 *)(table+0x40);entry+=0x34;table+=8;}while(*(s16 *)(entry+4)!=-1);}}}
