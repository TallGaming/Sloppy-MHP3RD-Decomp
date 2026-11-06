/*
 * FUN_088b5dec: find an object with a requested identifier in paired slot arrays.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: paired lookup control flow and register allocation remain different.
 */
typedef unsigned char u8; typedef unsigned short u16; void *FUN_088b51b8(void *,int,u8); void *FUN_088b5120(void *,int,u8,int);
void *FUN_088b5dec(void *owner,u16 id,u8 mode){int i=0;for(;;){u8 *p=FUN_088b51b8(owner,i,mode);int next=i+1;if(p&&*(u16 *)(p+0x60)==id)return p;p=FUN_088b5120(owner,i,mode,0);if(p&&*(u16 *)(p+0x60)==id)return p;i=next;if(next==6)return 0;}}
