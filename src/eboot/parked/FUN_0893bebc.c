/*
 * FUN_0893bebc: initialize a ten-tick transition or age an active one.
 *
 * Main EBOOT, attempt-high-01 medium batch 15. Transition role is a hypothesis.
 */

typedef unsigned char u8;void FUN_0893bba8(void *);
void FUN_0893bebc(u8 *record)
{if(*(signed char *)(record+0x3a)==0){FUN_0893bba8(record);*(int *)(record+0xe0)=10;record[0x3a]++;*(int *)(record+0x20)=*(int *)(record+0x80);*(int *)(record+0x24)=*(int *)(record+0x84);*(int *)(record+0x28)=*(int *)(record+0x88);*(int *)(record+0x2c)=*(int *)(record+0x8c);*(int *)(record+0x98)=0;record[0xd9]=0;*(int *)(record+0x90)=0;*(int *)(record+0x94)=0;return;}if(*(signed char *)(record+0x3a)==1){int value=*(int *)(record+0xe0)-1;*(int *)(record+0xe0)=value;if(value<1){record[0x3a]=0;record[0x39]=0;}}}
