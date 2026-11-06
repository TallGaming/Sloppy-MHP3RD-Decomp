/* Build a colored rectangle command from coordinates and four texture shorts. */
typedef unsigned char u8; typedef unsigned short u16; typedef short s16; typedef unsigned int u32;
typedef struct{s16 x,y,x2,y2;u16 uv[4];u8 color[4];u32 arg1,arg2;} Cmd;
void FUN_088fd888(void*,Cmd*,int);
void FUN_088fe334(void*ctx,s16 x,s16 y,s16 w,s16 h,u16*uv,u32 arg1,u32 arg2,u32 color){Cmd c;c.y2=h+y;c.x2=w+x;c.uv[3]=uv[3];c.uv[0]=uv[0];c.uv[1]=uv[1];c.uv[2]=uv[2];c.color[2]=color>>16;c.color[1]=color>>8;c.color[3]=color>>24;c.color[0]=color;c.x=x;c.y=y;c.arg1=arg1;c.arg2=arg2;FUN_088fd888(ctx,&c,0);}
