/*
 * FUN_088a7e44: notify an object with the current selected value.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 */
typedef unsigned char u8; typedef int (*Get)(void); typedef void (*Notify)(void *,int,int,int);
int FUN_088a7e18(void);
void FUN_088a7e44(u8 *o){ if(o[0x51d]){ void **m=*(void ***)o; int v=FUN_088a7e18(); ((Notify)m[0x42])(o,0xb,v,0); } }
