/*
 * FUN_0890d744: build a 98-byte local value, initialize a record and finalize it.
 *
 * Main EBOOT, attempt-high-01 medium batch 4. Lookup table and local buffer roles are hypotheses.
 */

typedef unsigned char u8;typedef unsigned int u32;typedef short s16;extern void *D_08a2919c;extern void *D_08aace80;
void FUN_0890d564();void FUN_0882d978(void *manager,u8 *out,int size,void *source,int flag);int FUN_08867d40(void *manager,int index);void FUN_0880e1d4(void *record,int a,void *b);void FUN_0890d57c(void *record);
void FUN_0890d744(u8 *record,s16 key,u32 index)
{
    u8 value[112];int lookup;FUN_0890d564();
    FUN_0882d978(D_08a2919c,value,0x62,(u8 *)0x08ab4650+(index&0xff)*0x14c+0x1284,1);
    lookup=FUN_08867d40(D_08aace80,key+0x32d);FUN_0880e1d4(record+0x1c,lookup,value);FUN_0890d57c(record);*(int *)(record+0x18)=0;
}
