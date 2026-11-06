/*
 * FUN_088cab94: test whether the selected object permits one of the active record states.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact-size selected-object predicate retains five global/external differences.
 */
typedef unsigned char u8; typedef unsigned int u32; extern u8 *D_08aace80; extern void *D_09bb7a80; extern void *D_09bb7e78; extern void *D_09da9600; void *FUN_088b51b8(void *,int,int); int func_0x09c88928(void *,void *);
int FUN_088cab94(u8 *record){void *selected;if(*(u32 *)(D_08aace80+0x60474)&1)return 0;selected=FUN_088b51b8(D_09bb7a80,D_08aace80[0x26],1);if(!selected)return 0;if((unsigned)(*(int *)(record+8)-6)<2)return 1;return func_0x09c88928(D_09da9600,selected)==1&&*(int *)((u8 *)D_09bb7e78+0x727d54)==0;}
