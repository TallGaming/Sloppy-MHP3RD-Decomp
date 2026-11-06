/*
 * FUN_08943e8c: search the first half-word of each six-byte table entry.
 *
 * Main EBOOT, attempt-high-01 medium batch 16. Table role is a hypothesis.
 */

typedef short s16;int FUN_08943e80(void);
int FUN_08943e8c(void *unused,s16 value)
{int count=FUN_08943e80(),index=0;s16 *entry=(s16 *)0x08a14a30;do{if(index>=count)return 0;index++;if(*entry==value)return 1;entry+=3;}while(1);}
