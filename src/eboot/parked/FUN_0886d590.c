/* Purpose: build and submit a zeroed temporary record with three short fields. */
extern void FUN_088ebb10(void*,int,unsigned int);extern void FUN_08960f38(unsigned short*);extern void FUN_0886d2dc(void*,void*);
void FUN_0886d590(void*object,unsigned short a,unsigned short b){unsigned short head[8];unsigned char record[0xa4];FUN_088ebb10(record,0,0xa4);*(unsigned short*)(record+0x0c)=a;*(unsigned short*)(record+0x0e)=b;FUN_08960f38(head);*(unsigned short*)(record+0x0a)=head[0];FUN_0886d2dc(object,record);}
