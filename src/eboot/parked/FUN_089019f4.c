/* FUN_089019f4: initialize a presentation record from an indexed descriptor.
 * Main EBOOT, attempt-high-01 241-512 byte batch 1. Record roles are hypotheses. */
typedef unsigned char u8;typedef unsigned short u16;typedef unsigned int u32;extern void *D_08ab1568,*D_09beb0bc;extern int PTR_LAB_0896b410;extern u32 D_089f8614[];
unsigned char *FUN_0887eff8(void*,u16);int FUN_088fa508(void*,u16);void FUN_088fb044(void*,int,int,int,int,int,int,int);
void FUN_089019f4(u32 *record,u16 id,int value,short amount,signed char mode,signed char use_default){unsigned char *descriptor;u32 flags;int signed_amount=amount;int extra;record[0]=(u32)&PTR_LAB_0896b410;descriptor=FUN_0887eff8(D_08ab1568,id);flags=D_089f8614[descriptor[4]];if(use_default==0||mode!=0){FUN_088fb044(record,flags&0xff,(signed char)descriptor[5],value,signed_amount,signed_amount,mode,0);return;}extra=FUN_088fa508(D_09beb0bc,id);FUN_088fb044(record,flags&0xff,(signed char)descriptor[5],value,signed_amount,signed_amount,0,extra);}
