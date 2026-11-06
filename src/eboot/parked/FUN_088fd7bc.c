/* Build a table-relative rectangle command and submit it. Layout is a hypothesis. */
typedef unsigned char u8; typedef unsigned short u16; typedef short s16; typedef unsigned int u32;
typedef struct{s16 x,y,x2,y2,tx,ty,tx2,ty2;u8 color[4];u32 flags,enabled;} Cmd;
extern u8 D_089f881c[]; void FUN_088fd4a4(void*,Cmd*,void*,u16);
void FUN_088fd7bc(void*ctx,s16 x,s16 y,int index,void*arg,u32 color){Cmd c;u8*t;c.color[3]=0xff;t=D_089f881c+index*10;c.tx=*(s16*)(t+0);c.ty=*(s16*)(t+2);c.tx2=*(s16*)(t+4)+c.tx;c.ty2=*(s16*)(t+6)+c.ty;c.x2=*(s16*)(t+4)+x;c.y2=*(s16*)(t+6)+y;c.color[1]=color>>8;c.color[2]=color>>16;c.color[0]=color;c.enabled=1;c.flags=0;c.x=x;c.y=y;FUN_088fd4a4(ctx,&c,arg,*(u16*)(t+8));}
