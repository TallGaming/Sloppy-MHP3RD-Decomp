/* Test whether a translated point lies beyond the queried height threshold. */
typedef unsigned char u8; typedef unsigned short u16;
struct Vec3 { float x,y,z; };
void FUN_088779e4(float *,float *); void FUN_088759ec(float *,float *,float *);
int func_09c18b10(void *,float *,u16,int,u8,void *);
extern void *D_09c47be0;
int FUN_088a5e1c(u8 *owner,u16 direction,float x,float y)
{
    float matrix[16],base[8],point[4]; struct Vec3 shifted; u8 result=0;
    base[0]=base[1]=base[3]=0.0f; base[2]=*(float *)(owner+0x74);
    FUN_088779e4(matrix,base); FUN_088759ec(point,base,matrix);
    shifted.x=*(float *)(owner+0x80)+point[0];
    shifted.y=*(float *)(owner+0x84)+point[1];
    shifted.z=*(float *)(owner+0x88)+point[2];
    func_09c18b10(D_09c47be0,(float *)&shifted,0xffff,2,owner[0xd6],&result);
    if(!result) return 0;
    if(direction) return y < point[0];
    return point[0] < y;
}
