/* FUN_08902cd8: advance two groups of three subrecords until all complete.
 * Main EBOOT, attempt-high-01 241-512 byte batch 2. Subrecord roles are hypotheses. */
typedef unsigned char u8;int FUN_08902be4(void*,signed char);
u8 FUN_08902cd8(u8 *state){int a,b,c,all=1;int i=0;u8 *first=state,*second=state+0xc0,*third=state+0x180;if(state[0x240]!=0){do{a=FUN_08902be4(first,0);b=0;if(all!=0)b=a;a=FUN_08902be4(second,0);c=0;if(b!=0)c=a;a=FUN_08902be4(third,0);if(c==0)a=0;all=a;i++;first+=0x60;second+=0x60;third+=0x60;}while(i!=2);if(all==0)return state[0x240];state[0x240]=0;}return 0;}
