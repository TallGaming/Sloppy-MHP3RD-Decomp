/*
 * FUN_0891cabc: build and post a compact command message.
 *
 * Main EBOOT, attempt-high-01 medium batch 9. Message fields are hypotheses.
 */

typedef unsigned char u8;typedef unsigned short u16;extern u8 *D_08aace80;extern void *D_09bb7bc0;void FUN_088c26bc(void *,int,void *,int);
struct Message0891cabc{u8 command;u8 pad;u16 zero;u16 first;u16 mask;u16 second;};
void FUN_0891cabc(void *unused,u8 command,u16 first,u16 mask,u16 second,signed char automatic)
{struct Message0891cabc message;message.zero=0;message.command=command;message.first=first;message.second=second;if(automatic==0)message.mask=mask;else{unsigned shift=D_08aace80[0x26]&31;message.mask=(u16)((1<<shift)|(0x10<<shift));}FUN_088c26bc(D_09bb7bc0,6,&message,0);}
