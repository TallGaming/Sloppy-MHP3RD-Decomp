/* FUN_088f0844: activate and update the indexed record named by an event. PARKED: draft remains longer and different. */
typedef unsigned char u8;void FUN_088f0788(void*,unsigned int);void FUN_088efc4c(void*,unsigned int);
void FUN_088f0844(u8*p,void*unused,u8*event){unsigned int n=event[4];if(p+n*10+0x446&&p[n*10+0x446]==0){FUN_088f0788(p,n);FUN_088efc4c(p,n);}}
