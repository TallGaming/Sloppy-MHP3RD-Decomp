/*
 * FUN_0891fd04: validate a selected save entry and test its availability.
 *
 * Main EBOOT, attempt-high-01 medium batch 11. Entry role is a hypothesis.
 */

typedef short s16;extern void *D_08aace80;void *FUN_0886cae0(void *,int);int FUN_08880258(void *,int,int,int);
int FUN_0891fd04(void *unused,signed char selector,s16 expected)
{s16 *entry;if(selector==-1)return 0;entry=(s16 *)FUN_0886cae0(D_08aace80,selector);if(entry[1]==0)return 0;entry=(s16 *)FUN_0886cae0(D_08aace80,selector);if(entry[0]==expected&&FUN_08880258(*(void **)0x08ab1568,entry[0],0,0)!=0)return 1;return 0;}
