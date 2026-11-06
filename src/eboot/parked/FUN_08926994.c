/*
 * FUN_08926994: validate the active object and refresh or confirm a sequence value.
 *
 * Main EBOOT, attempt-high-01 medium batch 13. Sequence roles are hypotheses.
 */

typedef unsigned char u8;typedef short s16;extern u8 *D_08aace80;int FUN_088b51b8(void *,int,int);
int FUN_08926994(u8 *record,void *object,s16 *value)
{if(object==0||object!=(void *)FUN_088b51b8(*(void **)0x09bb7a80,D_08aace80[0x26],1)||record[0xb91]!=0)return 0;if(*(s16 *)(record+0xb9e)<1){s16 next=*(s16 *)(record+0xb9c)+1;*(s16 *)(record+0xb9c)=next;*value=next;*(s16 *)(record+0xb9e)=4;return 1;}if(*value==*(s16 *)(record+0xb9c)){*(s16 *)(record+0xb9e)=4;return 1;}return 0;}
