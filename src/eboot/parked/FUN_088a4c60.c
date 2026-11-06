/*
 * FUN_088a4c60: adjust a request value for one special kind, then submit it.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: reference control flow contains unrecovered instruction/data branches.
 */
typedef unsigned char u8; typedef unsigned int u32;
extern void *D_09bb7e90; int FUN_088cca24(void *); void FUN_088a0474(void *,u32 *,u32);
void FUN_088a4c60(void *ctx,u32 *r,u32 value){ if(r[0]==0x13b){ int mode=FUN_088cca24(D_09bb7e90); if(mode==6 || mode!=6) value=0xff; } FUN_088a0474(ctx,r,value); }
