/*
 * FUN_0894bea0: select one of three record-address calculations.
 *
 * Main EBOOT, attempt-high-01 medium batch 18. Mode and record roles are hypotheses.
 */

typedef unsigned char u8;typedef short s16;extern u8 *D_08aace80;int FUN_0894be6c(void *);
void *FUN_0894bea0(u8 *record)
{signed char mode=*(signed char *)(record+5);if(mode==0)return D_08aace80+*(signed char *)(record+0xb)*4+0x5014;if(mode==1)return D_08aace80+*(s16 *)(record+0xc)*4+0x38a4;if(mode==2)return record+FUN_0894be6c(record)*10+0xca0;return 0;}
