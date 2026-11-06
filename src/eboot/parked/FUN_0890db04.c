/*
 * FUN_0890db04: initialize a record from one global lookup and store state.
 *
 * Main EBOOT, attempt-high-01 medium batch 5. Lookup index and record fields are hypotheses.
 */

typedef unsigned char u8;typedef short s16;extern void *D_08aace80;
void FUN_0890d564();int FUN_08867d40(void *,int);void FUN_0880e1d4(void *,int);void FUN_0890d57c(void *);
void FUN_0890db04(u8 *record,s16 key,int state)
{int value;FUN_0890d564();value=FUN_08867d40(D_08aace80,key+0x32d);FUN_0880e1d4(record+0x1c,value);FUN_0890d57c(record);*(int *)(record+0x18)=state;}
