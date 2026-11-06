/*
 * FUN_0892733c: accept the active object when its readiness method succeeds.
 *
 * Main EBOOT, attempt-high-01 medium batch 14. Method role is a hypothesis.
 */

typedef unsigned char u8;typedef unsigned int u32;extern u8 *D_08aace80;void *FUN_088b51b8(void *,int,int);
int FUN_0892733c(void)
{void *object;int result;if((*(u32 *)(D_08aace80+0x60474)&1)!=0)return 1;object=FUN_088b51b8(*(void **)0x09bb7a80,D_08aace80[0x26],1);result=((int (*)(void *))(*(void ***)object)[0x4c])(object);if(result==0)return 0;return 1;}
