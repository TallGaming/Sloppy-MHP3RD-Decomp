/*
 * FUN_08907a20: return the first descending table mask present in a selected global byte.
 *
 * Main EBOOT, attempt-high-01 medium batch 4. Table and mask roles are hypotheses.
 */

typedef unsigned char u8;extern u8 *D_08aace80;int FUN_0890642c();
u8 FUN_08907a20(void)
{
    int index=FUN_0890642c();u8 *mask=(u8 *)0x089fd5e3;
    do{u8 value=*mask;mask-=3;if((D_08aace80[0x5eabe + index]&value)!=0)return value;}while(mask!=(u8 *)0x089fd5d1);return 0;
}
