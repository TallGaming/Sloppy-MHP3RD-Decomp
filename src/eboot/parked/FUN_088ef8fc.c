/* FUN_088ef8fc: copy one active 24-byte channel record to the caller.
 * PARKED: exact instruction count retains record-copy allocation differences. */
typedef unsigned int u32;typedef unsigned char u8;
int FUN_088ef8fc(u8 *owner,u32 index,u32 *out){u32 *p=(u32 *)(owner+(index&0xff)*0x18);int active=*((u8 *)p+1)!=0;if(active){u32 a=p[0],b=p[1],c=p[2],d=p[3],e=p[4];out[5]=p[5];out[0]=a;out[1]=b;out[2]=c;out[3]=d;out[4]=e;}return active;}
