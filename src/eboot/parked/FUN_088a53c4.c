/* Initialize the local action profile from the selected global character record. */
typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32;
extern u8 *D_08aace80; extern void *D_08a3345c;
void FUN_088a4568(void *, void *, u8); int FUN_0885d498(void *, void *);
int FUN_0885c798(void *, void *); int FUN_0885c858(void *, int);
int FUN_0885c878(void *, int); int FUN_0885c7bc(void *, void *);
void FUN_088a53c4(u8 *out)
{
    u8 *src = D_08aace80 + 0x85c;
    void *profile = src + 0x5f130;
    int i;
    out[0x448]=src[0x1b]; out[0x449]=src[0x1c];
    out[0x4e0]=src[0x1d]; out[0x4e2]=src[0x1e]; out[0x4e3]=src[0x1f];
    *(u32 *)(out+0x44c)=*(u32 *)(src+0x24); *(u32 *)(out+0x450)=*(u32 *)(src+0x28);
    FUN_088a4568(out, profile, 0xff);
    *(u16 *)(out+0x4e4)=(u16)FUN_0885d498(D_08a3345c,src+0x34);
    for(i=0;i<3;i++) *(u32 *)(out+0x478+i*4)=*(u32 *)(src+0x38+i*4);
    out[0x62]=(u8)FUN_0885c798(D_08a3345c,out+0x478);
    out[0x5a9]=(u8)FUN_0885c858(D_08a3345c,out[0x62]);
    out[0x5aa]=(u8)FUN_0885c878(D_08a3345c,out[0x62]);
    out[0x5ab]=(u8)FUN_0885c7bc(D_08a3345c,out+0x478);
    for(i=0;i<3;i++){*(u32 *)(out+0x484+i*4)=*(u32 *)(src+0x44+i*4);*(u32 *)(out+0x490+i*4)=*(u32 *)(src+0x50+i*4);*(u32 *)(out+0x4a0+i*4)=*(u32 *)(src+0x5c+i*4);*(u32 *)(out+0x4b0+i*4)=*(u32 *)(src+0x68+i*4);*(u32 *)(out+0x4c0+i*4)=*(u32 *)(src+0x74+i*4);*(u32 *)(out+0x4d0+i*4)=*(u32 *)(src+0x80+i*4);}
}
