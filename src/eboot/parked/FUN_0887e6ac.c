/* Purpose: find a relationship and resolve its mode-specific value. */
extern short*FUN_0887dd58(void*,short,short,...);extern unsigned int FUN_0887e2d0(void*,short*,int);
unsigned int FUN_0887e6ac(void*context,short a,short b,int mode){short*r=FUN_0887dd58(context,a,b,mode==1,0,0);return r?FUN_0887e2d0(context,r,mode):0xffffffff;}
