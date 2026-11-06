/* Draw an embedded command with an optional auxiliary descriptor. */
typedef short s16; extern void*D_09beb0bc;void FUN_088ff8f0(void*,void*,int,int,int,int,void*,int,int,int);
void FUN_088ffe54(char*p,int a,int b,s16 x,s16 y){if(*(int*)(p+0x54)==0){FUN_088ff8f0(D_09beb0bc,p+0x20,a,b,x,y,0,-1,-1,0);return;}FUN_088ff8f0(D_09beb0bc,p+0x20,a,b,x,y,p+0x58,-1,-1,0);}
