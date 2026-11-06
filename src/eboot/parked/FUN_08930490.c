/*
 * FUN_08930490: update an embedded state and optionally publish its table values.
 *
 * Main EBOOT, attempt-high-01 medium batch 15. State roles are hypotheses.
 */

typedef unsigned char u8;void FUN_0892e7ec(void *,void *,int);void FUN_0892eef4(void *,void *);void FUN_089302f0(int,int,void *);
void FUN_08930490(u8 *record)
{signed char state;FUN_0892e7ec(record+0x61c,record+0x35c,0);if((record[0x1c6]&1)==0)FUN_0892eef4(record,record+0x61c);state=*(signed char *)(record+0x1c0);if(state==1)FUN_089302f0(*(signed char *)(record+0x575),record[0x574],(void *)0x08a0dfa0);}
