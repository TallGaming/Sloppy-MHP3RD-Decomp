/*
 * FUN_088bd1d8: query one matched object when an id is present in the owner table.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: guarded lookup/query remains one instruction longer with different allocation.
 */
typedef unsigned short u16; extern void *D_09bb7a80; int FUN_088f2e04(void *,u16); void *FUN_088b5dec(void *,unsigned,int); int FUN_088a58fc(void *,u16);
int FUN_088bd1d8(unsigned char *owner,u16 id,unsigned object_id){void *p;if(FUN_088f2e04(*(void **)(owner+0x10),id)==-1)return 0;p=FUN_088b5dec(D_09bb7a80,object_id,1);return p?FUN_088a58fc(p,id):0;}
