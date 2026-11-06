/* Purpose: send six address bytes and return the requested short on success. */
extern unsigned int FUN_08961080(unsigned int,void*,unsigned short,unsigned int,int,int,int);extern int FUN_08879f60(int);extern void FUN_088ebb18(void*,const void*,unsigned int);
int FUN_0887aefc(unsigned int a,const void*input,unsigned short c,unsigned int d,short value){unsigned char address[16];int status;FUN_088ebb18(address,input,6);status=FUN_08879f60(FUN_08961080(a,address,c,d,value,0,0));return status<0?status:value;}
