/*
 * FUN_088dbcfc: refresh a sound handle and optionally cache one of two channel values.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact-size handle refresh retains seven call/store differences.
 */
typedef unsigned short u16; void FUN_088ed6ac(int,int,int,int,int,int,int,int); void FUN_088ed380(void);
void FUN_088dbcfc(unsigned char *owner,int index,u16 value,unsigned which){int *slot=(int *)(owner+index*0x24);FUN_088ed6ac(slot[0],*(int *)(slot[0]+0x18),0,0,0,0,0,0);if(which<2){*(u16 *)((unsigned char *)slot+0x20+which*2)=value;slot[6+which]=*(int *)(slot[0]+0x150);}}
