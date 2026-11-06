/*
 * FUN_088db274: initialize a large owner record and cache one global mode byte.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact-size large-record initialization retains store scheduling differences.
 */
typedef unsigned char u8; extern void *D_09bb7e90; u8 FUN_088cdd88(void *);
void FUN_088db274(u8 *owner){*(int *)(owner+4)=1;*(int *)(owner+8)=0;*(int *)(owner+0xc)=0;*(int *)(owner+0x94)=0;*(short *)(owner+0x90)=0;*(int *)(owner+0x98)=0;*(int *)(owner+0x20)=0;*(int *)(owner+0x34)=0;*(int *)(owner+0x10c)=0x10;owner[0x1e5]=FUN_088cdd88(D_09bb7e90);*(int *)(owner+0x110)=1;owner[0x1e7]=1;owner[0x69e8]=1;}
