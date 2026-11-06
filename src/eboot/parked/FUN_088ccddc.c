/*
 * FUN_088ccddc: return a global fallback or a selected two-dimensional table value.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: two-dimensional table lookup remains one instruction short and different.
 */
typedef unsigned char u8; typedef unsigned short u16; extern void *D_09bb7e74; extern u8 *D_09c3e1d8; u16 FUN_088c8b80(void *);
u16 FUN_088ccddc(u8 *owner){u8 *row;if(owner[0x302c]==0)return FUN_088c8b80(D_09bb7e74);row=*(u8 **)(D_09c3e1d8+owner[0x9a30]*4);return *(u16 *)(row+owner[0x9a31]*4+2);}
