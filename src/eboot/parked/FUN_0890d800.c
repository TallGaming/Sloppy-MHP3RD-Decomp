/*
 * FUN_0890d800: initialize a record from two global lookups, an extra value and a final state.
 *
 * Main EBOOT, attempt-high-01 medium batch 5. Lookup indexes and record fields are hypotheses.
 */

typedef unsigned char u8;typedef unsigned short u16;typedef short s16;extern void *D_08aace80;
void FUN_0890d564();int FUN_08867d40(void *,int);int FUN_08867d54(void *,u16);void FUN_0880e1d4(void *,int,int,int);void FUN_0890d57c(void *);
void FUN_0890d800(u8 *record,s16 first,u16 second,int extra,int state)
{int a,b;FUN_0890d564();a=FUN_08867d40(D_08aace80,first+0x32d);b=FUN_08867d54(D_08aace80,second);FUN_0880e1d4(record+0x1c,a,b,extra);FUN_0890d57c(record);*(int *)(record+0x18)=state;}
