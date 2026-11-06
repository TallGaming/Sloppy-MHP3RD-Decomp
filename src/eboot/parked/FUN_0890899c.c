/*
 * FUN_0890899c: initialize two globals, rebuild a third and store MODE.
 *
 * Main EBOOT, attempt-high-01 medium batch 4. Global record roles are hypotheses.
 */

typedef unsigned char u8;extern int D_08a00198;
void FUN_089030a8(void *record,int a,int b,int c,int d);void FUN_089031fc(void *record,void *source,int *table);void FUN_089088d8();
void FUN_0890899c(u8 mode)
{
    FUN_089030a8((void *)0x09beb230,0,0,1,1);FUN_089030a8((void *)0x09beb0d8,4,0,1,1);
    FUN_089031fc((void *)0x09beb388,(void *)0x08a001a0,&D_08a00198);FUN_089088d8();*(u8 *)0x09beb0d4=mode;
}
