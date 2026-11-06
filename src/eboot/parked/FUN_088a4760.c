/*
 * FUN_088a4760: update transforms following a sentinel-terminated index chain.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: code shape matches, but the index-chain pointer lacks an absolute symbol.
 */
typedef unsigned char u8; typedef short s16;
extern s16 *D_089e2744; void FUN_08875a3c(void *,void *,void *);
void FUN_088a4760(void *unused,u8 *entry,u8 *base){ s16 *p=D_089e2744; if(*p!=-1) do{ int i; FUN_08875a3c(entry+0x50,entry+0x10,entry+0x90); i=p[1]; entry=base+i*0x280; p++; }while(p[0]!=-1); }
