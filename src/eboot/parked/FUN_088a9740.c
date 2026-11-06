/*
 * FUN_088a9740: report whether an inactive global slot is available.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: virtual query and bounded slot loop lower differently.
 */
typedef unsigned char u8; typedef unsigned short u16; typedef int (*Query)(void *);
extern u8 *D_08aace80; u16 *FUN_0886cae0(void *,int);
int FUN_088a9740(void *o){ void **m=*(void ***)o; int i=0; if(((Query)m[0x4d])(o)==0)return 1;
 if(D_08aace80[0x60b84]) do{ if(*FUN_0886cae0(D_08aace80,i)==0)return 1;i++; }while(i<D_08aace80[0x60b84]); return 0; }
