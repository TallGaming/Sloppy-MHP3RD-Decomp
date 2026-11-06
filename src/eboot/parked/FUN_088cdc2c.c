/*
 * FUN_088cdc2c: return one indexed value from the fourth owner-provided table.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: guarded table lookup remains longer and differently allocated.
 */
typedef void *(*Get)(void *);
int FUN_088cdc2c(unsigned char *owner,unsigned index){void *source=*(void **)(owner+0x3030);unsigned char *data;if(!source)return 0;data=((Get)(*(void ***)source)[2])(source);if(!data||!*(int *)(data+0x14))return 0;return ((int *)*(void **)(data+0x14))[index&0xff];}
