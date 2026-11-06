/* FUN_088f08bc: search variable records for a matching tagged value. PARKED: exact length retains broad allocation differences. */
typedef unsigned char u8;typedef unsigned int u32;
int FUN_088f08bc(u8*p,u32 n){char*r=*(char**)(p+0xb0),tag=*r;if(tag!=-1){char*next=r+8,*base=next;do{if(tag==*(char*)(p+(n&255)*10+0x43f)&&(u8)r[1]){int off=*(int*)(r+4);if(*(short*)(0x08a33e70+off)==0x2a3)return 1;{short*q=(short*)(0x08a33e74+off);u32 i=0;while(++i!=(u8)r[1]){short v=*q;q+=2;if(v==0x2a3)return 1;}}}tag=*next;next+=8;r=base;base+=8;}while(tag!=-1);}return 0;}
