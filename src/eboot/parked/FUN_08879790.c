/* Purpose: dispatch one draw operation to every child entry. */
void FUN_08879790(void*a,void*b,void*c,unsigned char*object,float*matrix)
{
    float identity[16]={1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1};int i,count=*(unsigned short*)(object+0x68);if(!matrix)matrix=identity;
    for(i=0;i<count;i++){void*child=*(void**)(object+0x58+i*4);typedef void(*Draw)(void*,void*,void*,void*,float*,float*);((Draw)(*(void***)child)[2])(a,b,c,child,matrix,identity);}
}
