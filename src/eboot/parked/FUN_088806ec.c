/* Purpose: transform two points and return their vector difference. */
extern void FUN_0889f14c();
void FUN_088806ec(void*unused,void*matrix,unsigned char*object,float*out,int second){float a[16],b[16];void*point=object+(second?0x1e0:0x150);(void)unused;FUN_0889f14c(point,object+0x120,a);FUN_0889f14c(matrix,point,object+0x120,b);out[0]=b[0]-a[0];out[1]=b[1]-a[1];out[2]=b[2]-a[2];out[3]=0;}
