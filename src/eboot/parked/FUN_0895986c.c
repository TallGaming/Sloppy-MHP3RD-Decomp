/* FUN_0895986c: copy a selected global byte and initialize a four-field part.
 * Main EBOOT, attempt-high-01 medium batch 21. Record roles are hypotheses. */
typedef unsigned char u8;extern void *D_09bb7a80;extern u8 *D_08aace80;extern u8 D_08a1be34[];int FUN_088b51b8(void*,u8,int);int FUN_09ce8e30(int);void FUN_0890000c(void*,int,int,int);
void FUN_0895986c(int record,int source){int value;int index;value=FUN_088b51b8(D_09bb7a80,*(u8 *)(D_08aace80+0x26),1);index=FUN_09ce8e30(value);if(index==0)return;*(u8 *)(record+0x36)=*(u8 *)(D_08a1be34+index+3);FUN_0890000c((void *)(record+4),*(int *)(source+4),0,0);return;}
