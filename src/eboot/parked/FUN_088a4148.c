/*
 * FUN_088a4148: initialize seven virtual slots when the object is inactive.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: virtual initialization loop compiles to a longer, different frame.
 */
typedef unsigned char u8; typedef unsigned int u32;
#define FIELD(b,t,o) (*(t *)((u8 *)(b)+(o)))
typedef int (*Query)(void *); typedef void (*Set)(void *,int); typedef void (*Call)(void *);
void FUN_088a3f94(void *);
void FUN_088a4148(u8 *o)
{ void **m=*(void ***)o; int i=0; if(((Query)m[0x29])(o)==0){ do{ ((Set)m[0x2c])(o,i); i++; }while(i!=7);
  ((Call)m[0x2d])(o); FUN_088a3f94(o); FIELD(o,u32,0x140c)=0x7f; } }
