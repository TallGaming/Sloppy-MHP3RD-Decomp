/*
 * FUN_08918dbc: test whether a record is eligible for either of two modes.
 *
 * Main EBOOT, attempt-high-01 medium batch 8. Mode meanings are hypotheses.
 */

typedef unsigned char u8;typedef short s16;int FUN_088be3b4(void *,int);int FUN_088bdfa0(void *);
int FUN_08918dbc(void *unused,u8 *record)
{void *manager=*(void **)0x09bb7b60;int mode;if(*(s16 *)(record+0xd14)<2&&FUN_088be3b4(manager,record[0x62])!=0&&(mode=FUN_088bdfa0(manager),(unsigned)(mode-11)<2))return 1;return 0;}
