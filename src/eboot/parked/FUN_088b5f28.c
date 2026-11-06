/*
 * FUN_088b5f28: notify each occupied one of four primary slots of its index.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: all ordinary words match; the external direct-call relocation is unresolved.
 */
typedef unsigned char u8; void func_0x09ce65fc(void *,int);
void FUN_088b5f28(u8 *owner){int i=0;do{void *p=*(void **)(owner+8);owner+=4;if(p)func_0x09ce65fc(p,i);i++;}while(i!=4);}
