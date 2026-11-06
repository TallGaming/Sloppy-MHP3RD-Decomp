/*
 * FUN_08943fb0: resolve a table pair and divide a global value by its scale.
 *
 * Main EBOOT, attempt-high-01 medium batch 16. Pair and scale roles are hypotheses.
 */

typedef short s16;typedef unsigned short u16;void FUN_08943f08(void *,u16 *,s16);int FUN_0887ee3c(void *,int);
int FUN_08943fb0(void *context,s16 *value)
{u16 pair[2];int result=0;if(*value!=0){FUN_08943f08(context,pair,*value);result=FUN_0887ee3c(*(void **)0x08ab1568,pair[0]);if((s16)pair[1]!=0)return result/(s16)pair[1];}return result;}
