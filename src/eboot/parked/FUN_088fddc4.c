/* Submit a fixed-size table-selected drawing command. Table layout is a hypothesis. */
typedef short s16; typedef unsigned short u16; typedef struct{u16 a,b;s16 c,d;} Pair;
extern unsigned char D_089f6d34[]; void FUN_088fdc44(int,int,int,Pair*,s16,s16,s16,int,int,int);
void FUN_088fddc4(int a,int b,int c,int index,s16 y,s16 z){unsigned char*p=D_089f6d34+index*6;Pair q;q.a=*(u16*)p;q.b=*(u16*)(p+2);q.c=42;q.d=42;FUN_088fdc44(a,b,c,&q,*(s16*)(p+4),y,z,-1,0,3);}
