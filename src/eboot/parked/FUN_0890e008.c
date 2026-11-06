/*
 * FUN_0890e008: allocate the current free entry and advance two counters with wraparound.
 *
 * Main EBOOT, attempt-high-01 medium batch 5. Entry array and counters are hypotheses.
 */

typedef unsigned char u8;
void *FUN_0890e008(u8 *record)
{int current=*(int *)(record+0x3074);u8 *entry=record+current*0x26c;int next=current+1;if(entry[0]!=0)return 0;*(int *)(record+0x3074)=next;(*(int *)(record+0x3078))++;if(next>0x13)*(int *)(record+0x3074)=0;return entry;}
