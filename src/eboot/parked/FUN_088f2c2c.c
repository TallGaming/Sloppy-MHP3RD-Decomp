/* Flush pending global short pairs. PARKED: initial plain-C attempt. */
short*FUN_088bdde4(void*,int);void FUN_088f2c2c(void){int i;for(i=0;i<32;i++){short*p=FUN_088bdde4(*(void**)0x09bb7b60,i);if(*p){p[0]=p[1]=0;}}}
