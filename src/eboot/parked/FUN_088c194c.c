/*
 * FUN_088c194c: create an AQsys object, initialize its child, and publish the child handle.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact-size object setup retains two data-symbol relocation differences.
 */
extern char s_AQsys_08968050[]; extern void *D_08a20fec; void *FUN_08960ae8(char *,int,int,int); void FUN_08960ad8(void *,void *);
void FUN_088c194c(unsigned char *owner){void *p=FUN_08960ae8(s_AQsys_08968050,0,0x1a7c0,0);*(void **)(owner+0x180)=p;FUN_08960ad8(p,owner+0x184);D_08a20fec=*(void **)(owner+0x184);}
