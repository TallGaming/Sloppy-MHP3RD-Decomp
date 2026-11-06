/*
 * FUN_088d12cc: process every eligible variable-length record in an owner list.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: dynamic-count record loop and external call remain longer and different.
 */
typedef unsigned short u16; int FUN_088d1240(void *,void *,char *); void func_0x09bfb2d0(void *,char *);
void FUN_088d12cc(unsigned char *owner){u16 count=*(u16 *)(owner+0x17e);unsigned char *record;char *type;int i;if(!count)return;record=*(unsigned char **)(owner+0x168);type=*(char **)(owner+0x174);i=0;do{i++;if(FUN_088d1240(owner,record,type)){func_0x09bfb2d0(record,type);count=*(u16 *)(owner+0x17e);}record+=*(int *)(record+8);type+=8;}while(i<count);}
