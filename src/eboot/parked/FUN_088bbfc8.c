/*
 * FUN_088bbfc8: clear primary slots and optionally clear paired secondary slots.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact instruction count retains two initialization differences.
 */
typedef unsigned char u8; void FUN_088bbdb0(void *,int,int);
void FUN_088bbfc8(u8 *owner,char paired){int i=0;u8 *it=owner;do{if(*(void **)(it+0x20))FUN_088bbdb0(owner,i,0);if(paired==1&&*(void **)(it+0x38))FUN_088bbdb0(owner,i,1);i++;it+=4;}while(i!=6);}
