/*
 * FUN_0891a528: initialize a viewport and ten embedded display entries.
 *
 * Main EBOOT, attempt-high-01 medium batch 9. Display roles are hypotheses.
 */

typedef unsigned char u8;extern void *D_09beb0bc;void FUN_088fa2b0(void *,int,int);void FUN_088fcf58(void *,int,int,int,int,void *);void FUN_088fff0c(void *,void *,int,int,int);
void FUN_0891a528(u8 *record)
{int count=0;u8 *entry;FUN_088fa2b0(D_09beb0bc,8,1);FUN_088fcf58(D_09beb0bc,0,0,0x1e0,0x110,record);entry=record+0x10;do{count++;FUN_088fff0c(entry,(void *)0x08a04aec,0,0,0);entry+=0x50;}while(count!=10);}
