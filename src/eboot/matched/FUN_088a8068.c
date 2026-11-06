/*
 * FUN_088a8068: report whether any of three related resource IDs are present.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 */
int FUN_0889f790(void *,int,int);
int FUN_088a8068(void *o){ return FUN_0889f790(o,0,0xa9)==1||FUN_0889f790(o,0,0xaa)==1||FUN_0889f790(o,0,0xab)==1; }
