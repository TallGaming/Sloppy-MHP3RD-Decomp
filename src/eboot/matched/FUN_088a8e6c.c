/*
 * FUN_088a8e6c: initialize sixteen fixed-size embedded records.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 */
typedef unsigned char u8; void FUN_088a8e54(void *,void *);
void FUN_088a8e6c(u8 *o){ int i; u8 *p=o+0xcc4; for(i=0;i<16;i++){ FUN_088a8e54(o,p); p+=0xc; } }
