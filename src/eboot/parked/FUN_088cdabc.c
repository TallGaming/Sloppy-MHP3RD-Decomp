/*
 * FUN_088cdabc: test one indexed state from the second owner-provided table.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: compiler boolean canonicalization leaves the second table predicate shorter.
 */
typedef void *(*Get)(void *);
int FUN_088cdabc(unsigned char *owner,unsigned index,char allow_one){void *source=*(void **)(owner+0x3030);unsigned char *data;int state;if(source){data=((Get)(*(void ***)source)[2])(source);if(data&&*(int *)(data+0xc)){state=((int *)*(void **)(data+0xc))[index&0xff];if(state==2)return 1;if(state==1&&allow_one==0)return 1;}}return 0;}
