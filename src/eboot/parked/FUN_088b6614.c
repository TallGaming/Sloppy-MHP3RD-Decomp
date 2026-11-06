/*
 * FUN_088b6614: release an object, unlink its indexed registration, and invalidate the slot.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: indexed unlink traversal remains longer with different register allocation.
 */
typedef unsigned char u8; typedef unsigned int u32; typedef void (*Release)(void *); extern void *D_09bb7a5c; extern u8 *D_08ab465c; void FUN_088a20d4(void *); void FUN_08878e64(void *,void *);
void FUN_088b6614(void *unused,void *object){u8 *base;int count,index=0;FUN_088a20d4(D_09bb7a5c);base=D_08ab465c;if(object)((Release)(*(void ***)object)[1])(object);count=*(int *)(base+0x7fcf0);if(count){if(*(void **)(base+0x7fc34)!=object){u8 *slot=base+0x7fc40;do{index++;if(count==index)return;slot+=12;}while(*(void **)(slot-12)!=object);}FUN_08878e64(base+4,object);*(u32 *)(base+0x7fc30+index*12)=~0u;}}
