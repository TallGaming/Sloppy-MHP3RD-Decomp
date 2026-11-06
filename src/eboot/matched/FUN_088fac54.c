/* FUN_088fac54: test whether a rectangle-like record is compatible with its mode.
 * Main EBOOT, non-G2 group-B medium match. Names and layout are hypotheses. */
typedef unsigned char u8; typedef short s16;
int FUN_088fac54(char*p){int result=1;u8 mode=*(u8*)(p+0x1c);if(mode!=2){if(mode==1){if(*(s16*)(p+0x24)-*(s16*)(p+0x20)!=*(s16*)(p+0x2c)-*(s16*)(p+0x28))return 1;if(*(s16*)(p+0x26)-*(s16*)(p+0x22)!=*(s16*)(p+0x2e)-*(s16*)(p+0x2a))return 1;}result=0;}return result;}
