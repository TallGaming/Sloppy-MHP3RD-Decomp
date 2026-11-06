/* FUN_088ef364: find a contiguous run of clear bits in an allocation bitmap.
 * PARKED: bitmap scan remains one instruction shorter and broadly different. */
typedef unsigned int u32;
u32 FUN_088ef364(unsigned char *owner,u32 needed){u32 run=0,start=0,index=0;for(;;){u32 adjusted=index+0x1f;if((int)index>=0)adjusted=index;if((*(u32 *)(owner+0xf8+((int)adjusted>>5)*4)&(1u<<(index&31)))==0){if(run==0)start=index;run++;if(needed<=run)return start;}else run=0;index++;if(index==0x4000)return 0xffffffff;}}
