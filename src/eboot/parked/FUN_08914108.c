/*
 * FUN_08914108: copy one of three table-selected sixteen-byte records.
 *
 * Main EBOOT, attempt-high-01 medium batch 6. Table roles are hypotheses.
 */

typedef unsigned char u8;typedef short s16;typedef unsigned int u32;
static void copy_record(u32 *output,u32 *source)
{u32 second=source[1],third=source[2],fourth=source[3];output[0]=source[0];output[1]=second;output[2]=third;output[3]=fourth;}
void FUN_08914108(u8 *record,u32 *output,s16 alternate)
{int index;if(*(s16 *)(record+0x64)==-1){index=record[0x34]*0x10;copy_record(output,(u32 *)(0x08a046b0+index));return;}index=*(s16 *)(record+0x64)*0x40;if(*(char *)(record+0x34)==1||(*(char *)(record+0x34)==3&&alternate==0)){copy_record(output,(u32 *)(0x08a03eb0+index));return;}copy_record(output,(u32 *)(0x08a03ed0+index));}
