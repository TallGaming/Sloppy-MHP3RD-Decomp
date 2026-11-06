/* Reset a small manager record. PARKED: initial plain-C attempt. */
void FUN_088f2884(void*);void FUN_088f28f4(char*p){int i;for(i=0;i<2;i++){*(int*)(p+i*12+4)=0;*(short*)(p+i*12+8)=*(short*)(p+i*12+10)=*(short*)(p+i*12+12)=0;}*(int*)(p+0x20)=1;for(i=0x28;i<=0x48;i+=4)*(int*)(p+i)=0;FUN_088f2884(p);p[0x27]=0;}
