/*
 * FUN_088bd758: validate a record through either an owner method or a large-id entry.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: split virtual/large-id checks lower shorter with different control flow.
 */
typedef int (*Check)(void *); unsigned char *FUN_088bd6bc(void *,int);
int FUN_088bd758(unsigned char *owner,unsigned char *record){short id=*(short *)(record+0xd14);if(id<10000){void *p=*(void **)(owner+0x1018);return ((Check)(*(void ***)p)[16])(p);}else{unsigned char *p=FUN_088bd6bc(owner,id);if((char)p[4]<1||p[8]!=0)return 0;return 1;}}
