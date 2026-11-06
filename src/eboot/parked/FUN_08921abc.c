/*
 * FUN_08921abc: build a sparse local descriptor and submit it globally.
 *
 * Main EBOOT, attempt-high-01 medium batch 12. Descriptor roles are hypotheses.
 */

typedef unsigned char u8;int FUN_08906a18(void *,int);void FUN_08950eac(void *,void *,int *,int,void *,int);
void FUN_08921abc(void *unused,void *record,unsigned selector)
{int descriptor[5];descriptor[0]=FUN_08906a18(record,((u8 *)0x09c41270)[selector&0xff]);descriptor[4]=descriptor[0];FUN_08950eac(*(void **)0x09bf05d0,(void *)0x08a0bb10,descriptor,0,record,0);}
