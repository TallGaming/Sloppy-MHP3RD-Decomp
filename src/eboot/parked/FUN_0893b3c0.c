/*
 * FUN_0893b3c0: classify a linked object through one feature query.
 *
 * Main EBOOT, attempt-high-01 medium batch 15. Classification meanings are hypotheses.
 */

typedef unsigned char u8;int FUN_088a52b0(void *,int);
int FUN_0893b3c0(u8 *record,u8 *object)
{if(*(signed char *)(record+0x3b)!=2)return 1;if(object==0||*(void **)(object+0xc)==0||FUN_088a52b0(*(void **)(object+0xc),0xb8)==0)return 2;return 3;}
