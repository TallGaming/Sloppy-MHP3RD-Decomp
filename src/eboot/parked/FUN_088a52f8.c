/*
 * FUN_088a52f8: search one of two five-byte global state lists.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: matching-size list search retains different pointer/register scheduling.
 */
typedef unsigned char u8; typedef unsigned short u16; typedef int (*Query)(void *);
extern u8 *D_08aace80;
int FUN_088a52f8(void *o,signed char value){ void **m=*(void ***)o; u8 *p; int n=5;
 if(((Query)m[0x4d])(o)==0) p=D_08aace80+(*(u16 *)((u8 *)o+0x60))*0xfc+0xb1; else p=D_08aace80+0x5d4a0;
 if(p) do{ if((signed char)*p++==value)return 1; }while(--n); return 0; }
