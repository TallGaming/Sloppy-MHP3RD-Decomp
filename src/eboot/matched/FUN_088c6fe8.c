/*
 * FUN_088c6fe8: publish four properties for one global channel.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 */
typedef unsigned short u16; extern void *D_09bc1ac0; void FUN_088dbaf4(void *,int,int); void FUN_088dbb14(void *,int,int); void FUN_088dbc38(void *,int,int,int); void FUN_088dba20(void *,int,u16);
void FUN_088c6fe8(void *unused,int channel,u16 value,int mapped,int extra){FUN_088dbaf4(D_09bc1ac0,channel,extra);FUN_088dbb14(D_09bc1ac0,channel,mapped);FUN_088dbc38(D_09bc1ac0,channel,0,mapped);FUN_088dba20(D_09bc1ac0,channel,value);}
