/* FUN_088eea8c: release one global resource on the final reference.
 * PARKED: absolute-global reference lowering remains longer and different. */
void FUN_08811d2c(void *,int);void FUN_08811d9c(void *,int,int);void FUN_08811e6c(void *,int);
void FUN_088eea8c(void){int *count=(int *)0x09bea84c;void *object=*(void **)0x09bea848;if(*count==1){FUN_08811d2c(object,0x100);FUN_08811d9c(object,0x8000,0x8000);FUN_08811e6c(object,0);}*count=*count-1;}
