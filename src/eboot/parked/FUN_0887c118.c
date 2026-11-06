/* Purpose: notify eight callback slots, then release global synchronization. */
extern void FUN_08960a70(void);unsigned int FUN_0887c118(void){unsigned int*p=(unsigned int*)0x08aad304;int i;for(i=0;i<8;i++,p+=2)if(p[0])((void(*)(int,int,unsigned int))p[0])(0,6,p[1]);FUN_08960a70();return 0;}
