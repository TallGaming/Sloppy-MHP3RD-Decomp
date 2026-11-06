/*
 * FUN_088a7f60: find a short threshold bucket for the object's indexed table.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: threshold-table global lacks a symbol and loop allocation differs.
 */
typedef unsigned char u8; typedef short s16;
#define FIELD(b,t,o) (*(t *)((u8 *)(b)+(o)))
extern void *D_08a3345c; extern s16 D_0897d728; u8 *FUN_0885be6c(void *,void *);
signed char FUN_088a7f60(u8 *o,s16 value){ u8 state=o[0x479],i=0; s16 *p; u8 *d;
 if((u8)(state-9)<3||state==15)return 0; d=FUN_0885be6c(D_08a3345c,o+0x478); p=(s16 *)((u8 *)&D_0897d728+d[8]*0xc);
 do{ if(value<=*p++)return i; i++; }while(i!=6); return 6; }
