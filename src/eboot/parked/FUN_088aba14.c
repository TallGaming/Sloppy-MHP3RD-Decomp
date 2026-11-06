/*
 * FUN_088aba14: run object callbacks and submit a constant-colored transform.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: callback and constant-colored submission use different call scheduling.
 */
typedef unsigned char u8; typedef unsigned int u32; typedef u32 (*Get)(void *); typedef void (*Call0)(void); typedef void (*Call1)(void *);
extern u32 D_089674d4; void FUN_08879790(u32,u32,u32,u32,void *);
void FUN_088aba14(u8 *o){ if(o[0x1411]){void **m=*(void ***)o;((Call0)m[0xe])();((Call1)m[0x3a])(o);FUN_08879790(D_089674d4,D_089674d4,D_089674d4,((Get)m[0x11])(o),o+0x10);}}
