/*
 * FUN_08908934: reinitialize a fixed global record when MODE changes.
 *
 * Main EBOOT, attempt-high-01 medium batch 4. Global state and fixed data roles are hypotheses.
 */

typedef signed char s8;extern int D_08a00198;void FUN_089031fc(void *record,void *source,int *table);void FUN_089088d8();
void FUN_08908934(s8 mode)
{
    if(*(s8 *)0x09beb0d4!=mode){FUN_089031fc((void *)0x09beb388,(void *)0x08a001a0,&D_08a00198);FUN_089088d8();}*(s8 *)0x09beb0d4=mode;
}
