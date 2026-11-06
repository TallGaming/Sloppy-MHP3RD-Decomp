/* Map a signed mode pair to a command code. Global type is a hypothesis. */
extern void*D_09befbd4; int FUN_0894399c(void*,unsigned short);
int FUN_088fa708(int unused,short mode,short value){int found;if(value!=0){if(mode==0)return 0x4c;if(mode==1)return 0x4b;if(mode==2){found=FUN_0894399c(D_09befbd4,(unsigned short)value);return found!=0?0x49:0x4a;}}return 0xff;}
