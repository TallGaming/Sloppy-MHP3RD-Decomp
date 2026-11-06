/* FUN_088f1ea8: clear and initialize ten global fixed-size records. PARKED: absolute-global loop remains longer and different. */
typedef unsigned char u8;void thunk_FUN_0880c468(void*,int,int);void FUN_08909338(void*);
void FUN_088f1ea8(void){u8*b=*(u8**)0x08aace80;int i=0;u8*r=b+0x5d4a8;thunk_FUN_0880c468(r,0,0x640);do{i++;FUN_08909338(r);r+=0xa0;}while(i!=10);b[0x5daea]=b[0x5dae8];b[0x5daeb]=b[0x5dae9];}
