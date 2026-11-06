/*
 * FUN_0892393c: build a four-half-word local request from two record values.
 *
 * Main EBOOT, attempt-high-01 medium batch 13. Request fields are hypotheses.
 */

typedef unsigned char u8;typedef short s16;extern void *D_09beb0bc;void FUN_0890158c(void *,void *,int);void FUN_08901168(void *,void *,int,int,int);
void FUN_0892393c(u8 *record)
{s16 request[4];if(*(signed char *)(record+0x6d4)==0)return;request[1]=*(s16 *)(record+0x712);request[0]=*(s16 *)(record+0x710);request[2]=(*(s16 *)0x08a0b2ec-*(s16 *)0x08a0b2e8)*7;request[3]=0;FUN_0890158c(D_09beb0bc,request,0);FUN_08901168(D_09beb0bc,(void *)0x08a0b30c,0,request[0],request[1]);}
