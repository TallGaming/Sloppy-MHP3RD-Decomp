/*
 * FUN_089395c0: randomly start and then age a short record timer.
 *
 * Main EBOOT, attempt-high-01 medium batch 15. Timer role is a hypothesis.
 */

typedef unsigned char u8;extern void *D_09bc1ed8;unsigned FUN_088e62f0(void *,int);
void FUN_089395c0(u8 *record)
{if(*(signed char *)(record+0x39)==3){if(*(signed char *)(record+0xc6)==0){if((FUN_088e62f0(D_09bc1ed8,0)&7)==0){record[0xc6]=1;*(int *)(record+0xb4)=0;}}else{int value=*(int *)(record+0xb4)+1;*(int *)(record+0xb4)=value;if(value>3)record[0xc6]=0;}}else record[0xc6]=0;}
