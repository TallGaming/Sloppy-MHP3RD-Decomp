/*
 * FUN_088b68ec: clear registrations for occupied slots, then refresh owner state.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact instruction count remains with two initialization-order differences.
 */
typedef unsigned char u8; void FUN_088b684c(void *,unsigned); void FUN_088b6108(void *);
void FUN_088b68ec(u8 *owner){int i=0;u8 *it=owner;do{void *p=*(void **)(it+8);it+=4;if(p)FUN_088b684c(owner,i);i++;}while(i!=6);FUN_088b6108(owner);}
