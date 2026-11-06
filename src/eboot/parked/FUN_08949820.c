/*
 * FUN_08949820: initialize a record from an object, tables and two local vectors.
 *
 * Main EBOOT, attempt-high-01 medium batch 17. Record and vector roles are hypotheses.
 */

typedef unsigned char u8;typedef unsigned short u16;typedef unsigned int u32;int FUN_08955e20(void *,int);void FUN_088a0730(void *,void *,int,void *,void *,void *);
void FUN_08949820(u8 *record,u8 *object,u16 selector)
{u8 stack[48];u32 first[4],second[4];int index;*(u8 **)(record+0xc)=object;*(u16 *)(record+0x98)=selector;record[0x56]=object[0xd6];index=*(u8 *)(FUN_08955e20(*(void **)0x09bf5260,selector)+2)*0x40;FUN_088a0730(object,stack,7,(void *)(0x08a1bc60+index),(void *)(0x08a1bc70+index),(void *)(0x08a1bc50+index));*(u32 *)(record+0x20)=first[0];*(u32 *)(record+0x24)=first[1];*(u32 *)(record+0x28)=first[2];*(u32 *)(record+0x2c)=first[3];((void (*)(void *,void *))0x09c0b2c0)(second,stack);*(u32 *)(record+0x70)=second[0];*(u32 *)(record+0x74)=second[1];*(u32 *)(record+0x78)=second[2];*(u32 *)(record+0x7c)=second[3];*(u32 *)(record+0x80)=*(u32 *)(record+0x20);*(u32 *)(record+0x84)=*(u32 *)(record+0x24);*(u32 *)(record+0x88)=*(u32 *)(record+0x28);*(u32 *)(record+0x8c)=*(u32 *)(record+0x2c);((void (*)(void *))0x09c01d84)(record);}
