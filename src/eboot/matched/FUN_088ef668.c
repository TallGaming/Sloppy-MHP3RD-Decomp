/*
 * FUN_088ef668: initialize the channel table, bitmap, and three default regions.
 * Main EBOOT, non-G2 group-B medium match. Names and types are hypotheses.
 */
typedef unsigned char u8;unsigned int FUN_08960d20(void);unsigned int FUN_08960ce0(void);void FUN_088ef454(void *,int,int,int,int,int,int);
void FUN_088ef668(u8 *p){int i;u8 *q;*(unsigned int *)(p+0xf0)=FUN_08960d20();*(unsigned int *)(p+0xf4)=FUN_08960ce0();i=0;q=p;do{*q=(u8)i;i++;q[1]=0;q+=0x18;}while(i!=10);i=0;q=p;do{i++;*(unsigned int *)(q+0xf8)=0;q+=4;}while(i!=0x200);*(unsigned int *)(p+0x8f8)=0;FUN_088ef454(p,0,0x200,0x110,0,0,-1);FUN_088ef454(p,1,0x200,0x110,0,0,-1);FUN_088ef454(p,2,0x200,0x110,0,0,-1);}
