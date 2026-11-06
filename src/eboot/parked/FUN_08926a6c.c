/*
 * FUN_08926a6c: invoke the active object's readiness method.
 *
 * Main EBOOT, attempt-high-01 medium batch 13. Method role is a hypothesis.
 */

typedef unsigned char u8;typedef unsigned int u32;extern u8 *D_08aace80;void *FUN_088b51b8(void *,int,int);
int FUN_08926a6c(void)
{void *object=FUN_088b51b8(*(void **)0x09bb7a80,D_08aace80[0x26],0);int result;if((*(u32 *)(D_08aace80+0x60474)&1)==0)result=((int (*)(void *))(*(void ***)object)[0x4c])(object);else result=((int (*)(void *))(*(void ***)object)[0x4c])(object);return result!=0;}
