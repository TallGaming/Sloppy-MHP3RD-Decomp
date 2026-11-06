/* Update track-state bits and reset the affected embedded tracks. */
typedef unsigned char u8; void FUN_088f9ce4(void*,int);
void FUN_088fb378(char*p,int mode,unsigned char force){if(force==1)*(int*)(p+8)=0;if(*(int*)(p+8)==0){if(mode==1){p[0xd]=p[0xd]|2;FUN_088f9ce4(p+0x60,0);return;}if(mode==2){p[0xd]=p[0xd]&0xfc;FUN_088f9ce4(p+0x10,0);FUN_088f9ce4(p+0x60,0);return;}if(mode==0){p[0xd]=p[0xd]|1;FUN_088f9ce4(p+0x10,0);}}}
