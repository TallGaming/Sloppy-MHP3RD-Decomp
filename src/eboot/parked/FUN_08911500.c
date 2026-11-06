/*
 * FUN_08911500: calculate a bounded floating value from a record setting.
 *
 * Main EBOOT, attempt-high-01 medium batch 6. Constant roles are hypotheses.
 */

typedef unsigned char u8;extern void *D_08aace80;void FUN_08869a68(float,void *,void *,float *,int);
float FUN_08911500(u8 *record)
{float value=0.0f,input=(float)*(short *)(record+0x50);FUN_08869a68(input,D_08aace80,(void *)0x08a03dc4,&value,0);if(input<*(float *)0x0896995c&&value<*(float *)(record+0x68)){value=*(float *)(record+0x68)+*(float *)0x08969960;if(*(float *)0x08969964<value)value=*(float *)0x08969964;}return value;}
