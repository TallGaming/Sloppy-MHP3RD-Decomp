/*
 * FUN_088be4f4: initialize the owner's timed state and mark it active.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 */
typedef unsigned char u8; typedef unsigned int u32; void FUN_088f45e8(void *,int); void FUN_088f45b4(void *,int);
void FUN_088be4f4(u32 *owner){u8 *bytes=(u8 *)owner;bytes[0x21b9]=1;owner[0x870]=0;FUN_088f45e8(owner+0x871,90000);FUN_088f45b4(owner+0x871,0);owner[0]=1;}
