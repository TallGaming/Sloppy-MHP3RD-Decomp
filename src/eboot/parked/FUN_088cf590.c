/*
 * FUN_088cf590: query one special global state or an owner bitset entry.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: explicit bitset predicate remains much shorter and differently allocated.
 */
typedef unsigned char u8; typedef unsigned int u32; extern void *D_08a33460; u32 FUN_08860c9c(void *);
u32 FUN_088cf590(u8 *owner,unsigned index){u32 word;index&=0xff;if(index==0x15)return FUN_08860c9c(D_08a33460);word=*(u32 *)(owner+0x9be8+(index>>5)*4);if(word&(1u<<(index&31)))return 1;return 0;}
