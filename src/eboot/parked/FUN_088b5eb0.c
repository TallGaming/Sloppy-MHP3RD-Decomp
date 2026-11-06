/*
 * FUN_088b5eb0: assign dense sequence numbers to the first eight identifiers.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: sequence-loop scheduling remains one instruction longer and different.
 */
typedef unsigned char u8; typedef unsigned short u16; u8 *FUN_088b5dec(void *,unsigned,u8);
void FUN_088b5eb0(void *owner){int i=0;short sequence=0;do{int next=i+1;u8 *p=FUN_088b5dec(owner,i,1);if(p){*(short *)(p+0x151c)=sequence;sequence++;}i=next;}while(i!=8);}
