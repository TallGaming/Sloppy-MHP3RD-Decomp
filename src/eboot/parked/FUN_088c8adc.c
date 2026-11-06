/*
 * FUN_088c8adc: permit a record unless two readiness tests fail for a blocked type.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: compound readiness/type predicate remains longer and differently lowered.
 */
typedef unsigned int u32; extern void *D_09bb7e78; int FUN_088c6ef8(void *,int); int FUN_088c52d8(void *);
int FUN_088c8adc(unsigned char *record){u32 type;if(FUN_088c6ef8(D_09bb7e78,0)==0&&FUN_088c52d8(D_09bb7e78)==0){type=*(u32 *)(record+8);if(type<0x13&&((1u<<(type&31))&0x41152)!=0)return 0;}return 1;}
