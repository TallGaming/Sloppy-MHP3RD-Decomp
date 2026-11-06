/*
 * FUN_088a3b38: dispatch a six-argument global operation using virtual data.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: global dispatcher lacks a symbol and six-argument setup differs.
 */
typedef unsigned char u8; typedef unsigned short u16;
#define FIELD(b,t,o) (*(t *)((u8 *)(b)+(o)))
extern u8 *D_08a3387c; typedef void *(*Get)(void *); typedef void (*Dispatch)(void *,u16,void *,int,int,int);
void FUN_088a3b38(u8 *o,void *unused,u16 value)
{ void *g=D_08a3387c; void **gm=*(void ***)g; void **m=*(void ***)o;
  ((Dispatch)gm[0xc])(g,value,((Get)m[0x1e])(o),FIELD(o,signed char,99)+5,0,1); }
