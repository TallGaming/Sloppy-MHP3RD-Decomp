/* Multiply a matrix by a translation and append its packed command words. */
typedef unsigned int u32;extern u32*D_08a31e88;
void FUN_0889c6c0(float*m,float*t){float r[12];u32*out=D_08a31e88;int row,col;for(row=0;row<3;row++)for(col=0;col<4;col++)r[row*4+col]=m[row*4+0]*(col==0?t[0]:col==1?t[1]:col==2?t[2]:0.0f)+m[row*4+col];D_08a31e88=out+13;out[0]=0x3a000000;for(row=0;row<12;row++)out[row+1]=(*(u32*)&r[row]>>8)|0x3b000000;}
