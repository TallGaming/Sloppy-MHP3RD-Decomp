/* Purpose: receive six address bytes and return the resulting short value. */
extern int FUN_08961090(unsigned int,void*,unsigned int,unsigned int,int*,int,int);extern int FUN_08879f60(int);extern void FUN_088ebb18(void*,const void*,unsigned int);
int FUN_0887ae64(unsigned int a,void*out,unsigned int c,unsigned int d,short value){int local=value,status;unsigned char address[12];status=FUN_08961090(a,address,c,d,&local,0,1);if(status==-0x7fbef8f7)return 0;status=FUN_08879f60(status);if(status<0)return status;FUN_088ebb18(out,address,6);return local;}
