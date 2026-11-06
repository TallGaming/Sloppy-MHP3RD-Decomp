/*
 * FUN_088c08c4: handle a two-state record and always forward its identifier.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: state tests and selected-player globals lower substantially longer.
 */
typedef unsigned char u8; typedef unsigned short u16; extern u8 *D_08aace80; void FUN_088c0844(void *,u16,u16); void FUN_088bf114(void *,u16);
void FUN_088c08c4(void *owner,u8 *record){short state=*(short *)(record+6);if(state==0){if(D_08aace80[0x26]==D_08aace80[0x6ba])FUN_088c0844(owner,*(u16 *)(record+4),1);}else if(state!=1)return;FUN_088bf114(owner,*(u16 *)(record+4));}
