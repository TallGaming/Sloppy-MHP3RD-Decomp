/* FUN_0890e410: advance the current queued record when its work completes.
 * Main EBOOT, attempt-high-01 241-512 byte batch 4. Queue roles are hypotheses. */
typedef unsigned char u8;typedef unsigned int u32;extern u8 *D_08aace80;extern void *D_09beb0bc;int FUN_0886c70c(void*,int);void FUN_088fa2b0(void*,int,int);void FUN_0890de68(void*);
void FUN_0890e410(u8 *queue){int enabled=(*(u32 *)(D_08aace80+0x60474)&1)!=0;u8 *entry;int index;if((enabled||FUN_0886c70c(D_08aace80,0)==0)&&(enabled||D_08aace80[0x6bc]==0)){FUN_088fa2b0(D_09beb0bc,9,1);entry=queue+*(int *)(queue+0x3070)*0x26c;if((entry[0]==0||(FUN_0890de68(entry),entry[0]==0))&&*(int *)(queue+0x3078)>0){(*(int *)(queue+0x3078))--;index=*(int *)(queue+0x3070)+1;*(int *)(queue+0x3070)=index;if(index>0x13)*(int *)(queue+0x3070)=0;}}}
