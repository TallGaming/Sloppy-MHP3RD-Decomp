/* Purpose: close a handle through the active backend and clear its slot. */
extern void FUN_08961038(int,int);extern void FUN_08961178(int);
unsigned int FUN_0887ad18(int*handle){int i,value=*handle;if(*(unsigned int*)0x08aad03c==1){if(value>=0){FUN_08961038(value,0);*handle=-1;}return 0;}if(value>=0){int*slots=(int*)0x08aacebc;for(i=0;i<16;i++,slots+=6)if(*slots==value){*slots=-1;break;}FUN_08961178(value);*handle=-1;}return 0;}
