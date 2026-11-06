/* Purpose: report whether a guarded subsystem action may be skipped. */
extern unsigned char D_08a31e84[];extern int FUN_0886c880(void);extern int FUN_088f2420(void*);
unsigned int FUN_0886c990(void*object){if(!FUN_0886c880()||*((signed char*)object+0x29)==0||!FUN_088f2420(D_08a31e84+0x294))return 1;return 0;}
