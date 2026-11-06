/* FUN_08909b30: construct or destroy two banks of five global objects.
 * Main EBOOT, attempt-high-01 241-512 byte batch 4. Object-bank roles are hypotheses. */
typedef unsigned char u8;extern u8 D_09beb0e8[],D_09beb228[],D_09beb240[],D_09beb380[],D_09beb388[];void FUN_088f9cbc(void*);void FUN_088f9cd0(void*);void FUN_088f9cdc(void*);void FUN_088f9fb4(void*);
void FUN_08909b30(int create,int selector){u8 *p;if(create==1){if(selector==0xffff){FUN_088f9cbc(D_09beb388);p=D_09beb240;do{FUN_088f9cd0(p);p+=0x50;}while(p!=D_09beb380);p=D_09beb0e8;do{FUN_088f9cd0(p);p+=0x50;}while(p!=D_09beb228);}}else if(create==0&&selector==0xffff){p=D_09beb228;do{p-=0x50;FUN_088f9cdc(p);}while(p!=D_09beb0e8);p=D_09beb380;do{p-=0x50;FUN_088f9cdc(p);}while(p!=D_09beb240);FUN_088f9fb4(D_09beb388);return;}}
