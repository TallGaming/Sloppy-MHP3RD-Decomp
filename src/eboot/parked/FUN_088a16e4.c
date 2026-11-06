/*
 * FUN_088a16e4: initialize object-manager arrays, buffers, and status fields.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: matching-size initialization retains thirteen loop/store differences.
 */
typedef unsigned char u8; typedef unsigned int u32;
#define FIELD(b,t,o) (*(t *)((u8 *)(b)+(o)))
extern u8 *D_09bb7a5c;
void FUN_088a0ff4(void *); void FUN_088ebb10(void *,int,u32);
void FUN_088a16e4(u8 *o)
{
    int i;
    FIELD(o,u32,0x4e4)=0; FIELD(o,u32,0x4e8)=0; D_09bb7a5c=o; FUN_088a0ff4(o);
    for(i=0;i<16;i++){ FIELD(o,u32,0x28+i*4)=0; FIELD(o,u32,0x68+i*4)=0; }
    FIELD(o,u32,0xa8)=0;
    FUN_088ebb10(o+0x290,0,0xd8); FUN_088ebb10(o+0x368,0,0xd8);
    FUN_088ebb10(o+0x440,0,0x36); FUN_088ebb10(o+0x476,0xff,0x6c);
    o[0xac]=0; FUN_088ebb10(o+0xb0,0,0x1b0); FIELD(o,u32,0x280)=0;
    for(i=0;i<8;i++) FIELD(o,u32,0x260+i*4)=0;
}
