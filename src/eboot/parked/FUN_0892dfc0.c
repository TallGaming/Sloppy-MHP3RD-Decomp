/*
 * FUN_0892dfc0: install a local callback descriptor and submit a table-selected request.
 *
 * Main EBOOT, attempt-high-01 medium batch 15. Callback and table roles are hypotheses.
 */

typedef unsigned char u8;extern void *D_09beb0bc;void FUN_08900bf0(void *,void *,void *,int,int,int,int,int);
void FUN_0892dfc0(void *unused,int mode,void *value)
{void *local[4];int index=(mode-2)*2,offset;if(mode>1){signed char argument=((signed char *)0x08a0fe49)[index];offset=((signed char *)0x08a0fe48)[index]*0x24;*(void ***)(0x08a06de4+offset)=local;*(void ***)(0x08a06e50+offset)=local;*(void ***)(0x08a06e74+offset)=local;local[0]=(void *)0x0896b3f8;FUN_08900bf0(D_09beb0bc,(void *)(0x08a06dc4+offset),value,argument,0,0,0,0);}}
