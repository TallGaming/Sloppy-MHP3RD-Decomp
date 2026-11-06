/*
 * FUN_088cd7b8: select one of two result codes from two owner predicates.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 */
int FUN_088ccc20(void *,unsigned char); int FUN_088cd77c(void *,int);
int FUN_088cd7b8(unsigned char *owner){if(FUN_088ccc20(owner,owner[0x9a30])==2&&FUN_088cd77c(owner,4))return 0x102;return 0x101;}
