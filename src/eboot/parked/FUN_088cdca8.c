/*
 * FUN_088cdca8: return one indexed value from the fifth table or a global fallback.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: fallback table lookup remains one instruction longer and different.
 */
typedef void *(*Get)(void *); extern int D_08968394;
int FUN_088cdca8(unsigned char *owner,unsigned index){void *source=*(void **)(owner+0x3030);unsigned char *data;if(!source)return D_08968394;data=((Get)(*(void ***)source)[2])(source);if(!data||!*(int *)(data+0x18))return D_08968394;return ((int *)*(void **)(data+0x18))[index&0xff];}
