/*
 * FUN_08943f08: return the two payload half-words for a matching table entry.
 *
 * Main EBOOT, attempt-high-01 medium batch 16. Table role is a hypothesis.
 */

typedef short s16;typedef unsigned short u16;int FUN_08943e80(void);
void FUN_08943f08(void *unused,u16 *output,s16 value)
{int count=FUN_08943e80(),index=0;s16 *entry=(s16 *)0x08a14a30;while(index<count){index++;if(entry[0]==value){output[0]=entry[1];output[1]=entry[2];return;}entry+=3;}output[1]=0;output[0]=0;}
