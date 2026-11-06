/*
 * FUN_088ab778: submit a guarded update, notify the object, and refresh state.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: guarded update and virtual notification lower to a longer frame.
 */
typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32;
#define FIELD(b,t,o) (*(t *)((u8 *)(b)+(o)))
typedef void (*Call)(void *); void FUN_0889fcc8(u32,u32,void *,u32,u32); void FUN_088a0d68(void *);
void FUN_088ab778(u8 *o){ void **m=*(void ***)o;if(!o[0x1411])return;if(!(FIELD(o,u32,0xba0)&0x80)){
 FIELD(o,u32,0xba0)|=0x80;FUN_0889fcc8(FIELD(o,u32,0x198),FIELD(o,u32,0x19c),o,FIELD(o,u16,0x18e),FIELD(o,u32,0x1a0));FIELD(o,u32,0xba0)&=0xfeffffff;}
 ((Call)m[0x48])(o);FUN_088a0d68(o);}
