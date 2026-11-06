/*
 * FUN_08907a9c: sum table-selected byte weights for every active mask.
 *
 * Main EBOOT, attempt-high-01 medium batch 4. Global array and weight table roles are hypotheses.
 */

typedef unsigned char u8;extern u8 *D_08aace80;int FUN_0890642c();int FUN_0880bff4(void *a,void *b,int size);
int FUN_08907a9c(u8 *record)
{
    int index=FUN_0890642c(),alternate=FUN_0880bff4(D_08aace80+0x590d8,record+0x7c,8),sum=0;u8 *entry=(u8 *)0x089fd5e3;
    do{if((D_08aace80[0x5eabe + index]&entry[0])!=0)sum+=entry[alternate==0?1:2];entry-=3;}while(entry!=(u8 *)0x089fd5d1);return sum;
}
