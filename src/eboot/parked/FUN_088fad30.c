/* Clamp a cursor, select the matching interval, and notify its observer. */
void FUN_088f9ce4(void*);
void FUN_088fad30(int*p,int value){int clamped=value<0?0:value;int*i;int n,off;p[0]=clamped;if(p[1]<clamped)p[0]=p[1];i=(int*)p[0x15];if(i&&((p[0x14]=0),*(int*)(i[1]+0xc)<=value)){n=0;off=0xc;while(n<i[0]-1){n++;p[0x14]=n;if(value<*(int*)(i[1]+off+0xc))break;off+=0xc;}}if(p[0x12])FUN_088f9ce4(p);}
