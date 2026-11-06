/* FUN_088f0048: reset a controller record and related external state.
 * PARKED: global/controller setup remains longer and broadly different. */
typedef unsigned char u8;void FUN_08903534(void *);void FUN_08903280(void *);int FUN_088b51b8(void *,u8,int);void FUN_088c926c(void *,int,int,int,int,int,int,int,int,int);
void FUN_088f0048(u8 *p){int *global=(int *)0x08aace80;int object;FUN_08903534(p+0xb4);FUN_08903280(p+0x1f8);p[0x43c]=0;p[0x43d]=0;*(int *)(p+0x474)=0;p[0x458]=0;*(int *)(p+0x45c)=0;*(int *)(p+0x460)=0;*(int *)(p+0x464)=0;*(int *)(p+0x468)=0;*(int *)(p+0x46c)=0;*(int *)(p+0x470)=0;object=FUN_088b51b8(*(void **)0x09bb7a80,*(u8 *)(*global+0x26),1);if(object){*(unsigned short *)(object+0x5a4)=0;*(u8 *)(object+0x516)=0;}FUN_088c926c(*(void **)0x09bb7e78,0,7,0,5,-1,-1,0,0,0);}
