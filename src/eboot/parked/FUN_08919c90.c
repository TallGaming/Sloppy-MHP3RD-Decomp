/* FUN_08919c90: locate the indexed entry across grouped sentinel lists.
 * Main EBOOT, attempt-high-01 241-512 byte batch 8. Entry roles are hypotheses. */
typedef unsigned char u8;typedef unsigned int u32;extern u8 D_08a33ea0[];short *FUN_0891d4c0(void*,signed char);
u8 *FUN_08919c90(void *owner,short target){short *entry=FUN_0891d4c0(owner,0);u32 flat=0;int base=0;signed char group=0;while(entry!=0){if(entry[0]!=-1){int offset=0;if(base==target)return D_08a33ea0+flat*8;while(1){entry+=0x18;offset++;flat=(flat+1)&0xff;if(entry[0]==-1)break;if(offset==target-base)return D_08a33ea0+flat*8;}}group++;entry=FUN_0891d4c0(owner,group);base+=10;}return 0;}
