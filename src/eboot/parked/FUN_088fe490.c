/* Fill a rectangle command from a descriptor, then submit it. */
typedef unsigned char u8; typedef short s16; typedef unsigned int u32;
typedef struct{s16 x,y,x2,y2;s16 extra[4];u8 color[4];u32 arg1,arg2;} Cmd;
void FUN_088fa7b4(void*,Cmd*,void*,u32);void FUN_088fd888(void*,Cmd*,void*);
void FUN_088fe490(void*ctx,s16 x,s16 y,char*desc,u32 arg1,u32 arg2,u32 color,void*last,u32 first){Cmd c;c.x2=x+*(s16*)(desc+4);c.y2=y+*(s16*)(desc+6);c.x=x;c.y=y;FUN_088fa7b4(ctx,&c,desc,first);c.color[2]=color>>16;c.color[1]=color>>8;c.color[0]=color;c.color[3]=color>>24;c.arg1=arg1;c.arg2=arg2;FUN_088fd888(ctx,&c,last);}
