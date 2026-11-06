/* FUN_088efbcc: compare a scaled table probability with a random sample.
 * PARKED: probability arithmetic remains one instruction longer and different. */
typedef unsigned int u32;u32 FUN_088e62f0(void *,int);int FUN_088bcdb8(void *);
int FUN_088efbcc(int *p){u32 r=FUN_088e62f0(*(void **)0x09bc1ed8,0);unsigned char chance=*(unsigned char *)((unsigned char)p[1]*2+p[0]+1);int scale=FUN_088bcdb8(*(void **)0x09bb7b60);return (r&0x7f)<(((u32)chance<<2)/scale&0xffff);}
