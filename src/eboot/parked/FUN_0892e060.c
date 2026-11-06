/*
 * FUN_0892e060: derive a table record and pass it to two setup functions.
 *
 * Main EBOOT, attempt-high-01 medium batch 15. Table role is a hypothesis.
 */

typedef unsigned char u8;void FUN_0892dfc0(void *,int,void *);void FUN_0892cab8(void *,int,void *);
void FUN_0892e060(u8 *record)
{int mode=*(signed char *)(record+0xc);void *table;if(mode<2)return;table=(void *)(0x08a06dc4+((signed char *)0x08a0fe4e)[mode]*0x24);FUN_0892dfc0(record,mode,table);FUN_0892cab8(record,*(signed char *)(record+0xc),table);}
