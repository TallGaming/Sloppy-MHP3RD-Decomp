/* FUN_08919aa4: return the maximum mapped value across all list groups.
 * Main EBOOT, attempt-high-01 241-512 byte batch 8. Mapping roles are hypotheses. */
typedef unsigned char u8;typedef unsigned short u16;typedef unsigned int u32;extern u32 *D_08a3387c;extern u16 D_09d7c270[];u8 *FUN_0891d4c0(void*,signed char);
u32 FUN_08919aa4(void *owner,signed char slot,int group){u32 best=0,value;u8 *entry=FUN_0891d4c0(owner,0);signed char index=0;while(entry!=0){int key=*(short *)(entry+slot*0x30);index++;if(key!=-1){value=((u32 (*)(void*,u16))(*(u32 *)(D_08a3387c[0]+0x14)))(D_08a3387c,D_09d7c270[key*4+group]);if(value!=0xffff&&best<value)best=value;}entry=FUN_0891d4c0(owner,index);}return best;}
