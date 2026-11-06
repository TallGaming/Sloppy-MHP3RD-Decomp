/*
 * FUN_0891f860: reset a global subsystem and submit three display descriptors.
 *
 * Main EBOOT, attempt-high-01 medium batch 11. Descriptor roles are hypotheses.
 */

extern void *D_09beb0bc;extern void *D_08aace80;void FUN_08851c04(void *);void FUN_08900bf0(void *,void *,int,int,int,int,int,int);void FUN_08904570(void *,void *,int,int,int,int,int,int,int);int FUN_08867d40(void *,int);
void FUN_0891f860(void *unused,int first,int second)
{FUN_08851c04(*(void **)0x08a31df0);FUN_08900bf0(D_09beb0bc,(void *)0x08a0f2c0,first,2,0,0,0,0);FUN_08904570(D_09beb0bc,(void *)0x08a0f32c,second,0,first,0,0,0,0);FUN_08904570(D_09beb0bc,(void *)0x08a0f350,FUN_08867d40(D_08aace80,0x218),0,first,0,0,1,0);}
