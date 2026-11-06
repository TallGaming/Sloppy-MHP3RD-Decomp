/*
 * FUN_08943c70: sum one byte and two half-words from three indexed tables.
 *
 * Main EBOOT, attempt-high-01 medium batch 16. Table roles are hypotheses.
 */

typedef unsigned char u8;typedef short s16;
s16 FUN_08943c70(void *unused,unsigned first,unsigned second,unsigned third)
{return ((u8 *)0x08a15cf1)[(first&0xffff)*0x18]+*(s16 *)(0x08a151e8+(second&0xffff)*0x10)+*(s16 *)(0x08a15768+(third&0xffff)*0x10);}
