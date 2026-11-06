/*
 * FUN_089267a8: accept the active object only when two state queries are clear.
 *
 * Main EBOOT, attempt-high-01 medium batch 13. Query meanings are hypotheses.
 */

typedef unsigned char u8;extern u8 *D_08aace80;int FUN_088b51b8(void *,int,int);int FUN_0889f790(void *,int,int);
int FUN_089267a8(void)
{void *object=(void *)FUN_088b51b8(*(void **)0x09bb7a80,D_08aace80[0x26],1);if(object==0||FUN_0889f790(object,0xe,0)!=0||FUN_0889f790(object,0xe,1)!=0)return 0;return 1;}
