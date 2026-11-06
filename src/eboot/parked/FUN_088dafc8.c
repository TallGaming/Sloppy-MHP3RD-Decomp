/*
 * FUN_088dafc8: process each paired variable-length owner record.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: paired variable-record traversal remains shorter and differently allocated.
 */
typedef unsigned short u16; void FUN_088da90c(void *,void *,void *);
void FUN_088dafc8(unsigned char *owner){unsigned char *a=*(unsigned char **)(owner+0x164);unsigned char *b=*(unsigned char **)(owner+0x170);u16 count=*(u16 *)(owner+0x17c);int i=0;if(!a||!b||!count)return;do{FUN_088da90c(owner,a,b);i++;a+=*(int *)(a+8);b+=8;}while(i<count);}
