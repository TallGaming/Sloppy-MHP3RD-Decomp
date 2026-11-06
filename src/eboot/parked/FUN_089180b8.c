/*
 * FUN_089180b8: resolve a state-table entry through a global object method.
 *
 * Main EBOOT, attempt-high-01 medium batch 8. Table and method roles are hypotheses.
 */

typedef unsigned short u16;extern void *D_08a3387c;int *FUN_0891dc58(void *);
int FUN_089180b8(void *context,signed char selector,int offset)
{int index=FUN_0891dc58(context)[selector],result;if(index==-1||(result=(*(int (***)(void *,u16))D_08a3387c)[5](D_08a3387c,*(u16 *)(0x09d7c270+(index*4+offset)*2)),result==0xffff))return 0;return result;}
