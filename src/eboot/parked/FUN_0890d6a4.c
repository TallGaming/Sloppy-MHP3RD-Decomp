/*
 * FUN_0890d6a4: initialize a record from two global lookup values and finalize it.
 *
 * Main EBOOT, attempt-high-01 medium batch 4. Lookup indexes and record fields are hypotheses.
 */

typedef unsigned char u8;typedef short s16;extern void *D_08aace80;
void FUN_0890d564();int FUN_08867d40(void *manager,int index);void FUN_0880e1d4(void *record,int a,int b);void FUN_0890d57c(void *record);
void FUN_0890d6a4(u8 *record,s16 first,s16 second)
{
    int a,b;FUN_0890d564();a=FUN_08867d40(D_08aace80,first+0x32d);b=FUN_08867d40(D_08aace80,second+0x5d3);
    FUN_0880e1d4(record+0x1c,a,b);FUN_0890d57c(record);*(int *)(record+0x18)=0;
}
