/*
 * FUN_088a4394: fill five byte fields through two global lookup helpers.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: one global context lacks a symbol and loop register allocation differs.
 */
typedef unsigned char u8; typedef short s16;
#define FIELD(b,t,o) (*(t *)((u8 *)(b)+(o)))
extern void *D_08aace80; extern void *D_08a3345c;
int FUN_08868e08(void *,int); u8 *FUN_0885c3dc(void *,int,int);
void FUN_088a4394(u8 *o){ int i; for(i=0;i<5;i++){ int x=FUN_08868e08(D_08aace80,i); u8 *p=FUN_0885c3dc(D_08a3345c,x,FIELD(o,s16,0x492+x*0x10)); o[0x1404+i]=p[0x13]; } }
