/*
 * FUN_088b6990: clear primary slots and optionally clear paired secondary slots.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact instruction count remains with two initialization differences.
 */
typedef unsigned char u8; void FUN_088b6964(void *,int,int);
void FUN_088b6990(u8 *owner,char paired){int i=0;u8 *it=owner;do{if(*(void **)(it+0x20))FUN_088b6964(owner,i,0);if(paired==1&&*(void **)(it+0x38))FUN_088b6964(owner,i,1);i++;it+=4;}while(i!=6);}
