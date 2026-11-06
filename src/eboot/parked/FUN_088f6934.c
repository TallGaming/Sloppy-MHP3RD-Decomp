/* Update six-by-eight state bytes. PARKED: initial plain-C attempt. */
void FUN_088f6934(void*u,int*p,char mode){int a,b;for(a=0;a<6;a++)for(b=0;b<8;b++)if(*(char*)((char*)p+a*0x580+b*0xb0+0x5f0))*(char*)((char*)p+a*0x580+b*0xb0+0x5f7)=mode!=1;}
