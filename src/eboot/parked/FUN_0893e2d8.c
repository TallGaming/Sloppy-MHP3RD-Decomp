/*
 * FUN_0893e2d8: return the selected nonmatching entry from a global table.
 *
 * Main EBOOT, attempt-high-01 medium batch 16. Table and key roles are hypotheses.
 */

typedef unsigned char u8;void *FUN_08885024(void *);int FUN_0880bff4(void *,void *,int);
void *FUN_0893e2d8(int selected)
{u8 *global=*(u8 **)0x08ab4650;int matches=0;unsigned index=0;if(*(signed char *)(global+0x17af)>0){do{u8 *entry=global+(index&0xff)*0x14c+0x818;index++;if(FUN_0880bff4(FUN_08885024(global),entry,6)!=0){if(matches==selected)return entry;matches++;}}while((int)index<*(signed char *)(global+0x17af));}return 0;}
