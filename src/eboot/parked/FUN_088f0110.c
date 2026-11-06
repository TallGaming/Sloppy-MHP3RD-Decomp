/* FUN_088f0110: advance controller timers and age related external counters.
 * PARKED: timer/global update lowering remains longer and broadly different. */
typedef unsigned char u8;void FUN_08902b0c(void *);void FUN_08902cd8(void *);int FUN_088b51b8(void *,u8,int);
void FUN_088f0110(u8 *p){void *global=*(void **)0x09bb7a80;int base=*(int *)0x08aace80;int object;FUN_08902b0c(p+0xb4);FUN_08902cd8(p+0x1f8);if(p[0x458]&&++*(int *)(p+0x46c)>=*(int *)(p+0x470))p[0x458]=0;object=FUN_088b51b8(global,*(u8 *)(base+0x26),1);if(object){if(*(char *)(object+0x516))(*(char *)(object+0x516))--;if(*(short *)(object+0x5a4)>0)(*(short *)(object+0x5a4))--;}}
