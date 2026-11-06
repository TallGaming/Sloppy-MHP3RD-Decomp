/*
 * FUN_088a5944: test a mode-specific byte from a global indexed record.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: global lookup context lacks a symbol and branch lowering differs.
 */
typedef short s16; extern void *D_08ab1568; signed char *FUN_0887eff8(void *,s16);
int FUN_088a5944(void *unused,s16 index,int mode){ signed char *p;
 if(mode==0){ p=FUN_0887eff8(D_08ab1568,index); if(*p==1)return 1; }
 else if(mode==1){ p=FUN_0887eff8(D_08ab1568,index); if(*p==2 && index!=0x82)return 1; } return 0; }
