/*
 * FUN_088bdf28: test whether the owner's table type belongs to one allowed set.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: allowed-type predicate remains one instruction short and differently allocated.
 */
typedef unsigned int u32; u32 FUN_088f2df8(void *);
int FUN_088bdf28(unsigned char *owner){u32 type;if(*(void **)(owner+0x10)){type=FUN_088f2df8(*(void **)(owner+0x10));if(type<0x15&&((1u<<(type&31))&0x1f0078)!=0)return 1;}return 0;}
