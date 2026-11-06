/*
 * FUN_0891dccc: close an active state and notify two global systems.
 *
 * Main EBOOT, attempt-high-01 medium batch 10. State meanings are hypotheses.
 */

typedef unsigned char u8;extern void *D_08a3387c;extern void *D_08a31e84;void FUN_08864dc4(void *,int);void FUN_08855720(void *,int);
void FUN_0891dccc(u8 *record)
{if(*(signed char *)(record+0x28)==0||*(int *)(record+0x14)!=6)return;FUN_08864dc4(D_08a3387c,3);FUN_08864dc4(D_08a3387c,4);FUN_08855720(D_08a31e84,record[0x2a]);record[0x29]=1;*(int *)(record+0x14)=5;}
