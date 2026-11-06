/*
 * FUN_088bdfc4: test whether the owner's table type belongs to a smaller allowed set.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: smaller allowed-type predicate remains one instruction short.
 */
typedef unsigned int u32; u32 FUN_088f2df8(void *);
int FUN_088bdfc4(unsigned char *owner){u32 type;if(*(void **)(owner+0x10)){type=FUN_088f2df8(*(void **)(owner+0x10));if(type<0x12&&((1u<<(type&31))&0x30018)!=0)return 1;}return 0;}
