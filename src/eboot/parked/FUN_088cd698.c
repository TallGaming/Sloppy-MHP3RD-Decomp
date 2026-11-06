/*
 * FUN_088cd698: find one of six twelve-byte records by mode and two byte keys.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: six-record byte-key search remains shorter with table/global differences.
 */
typedef unsigned char u8; extern void *D_09bb7e90; extern u8 D_09c3e0d8[]; unsigned FUN_088cca24(void *);
u8 *FUN_088cd698(u8 a,u8 b){unsigned mode=FUN_088cca24(D_09bb7e90);int i=0;u8 *p=D_09c3e0d8;for(;;){i++;if(p[0]==mode&&p[1]==a&&p[6]==b)return p;p+=12;if(i==6)return 0;}}
