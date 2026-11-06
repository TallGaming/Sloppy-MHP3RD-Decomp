/* Multiply a matrix by a translation and append commands through a context. */
typedef unsigned int u32;extern char*D_08a31e8c;
void FUN_0889c820(float*m,float*t){float r[12];u32**cursor=(u32**)(D_08a31e8c+0x194),*out=*cursor;int row,col;for(row=0;row<3;row++)for(col=0;col<4;col++)r[row*4+col]=m[row*4+0]*(col==0?t[0]:col==1?t[1]:col==2?t[2]:0.0f)+m[row*4+col];*cursor=out+13;out[0]=0x3a000000;for(row=0;row<12;row++)out[row+1]=(*(u32*)&r[row]>>8)|0x3b000000;}
