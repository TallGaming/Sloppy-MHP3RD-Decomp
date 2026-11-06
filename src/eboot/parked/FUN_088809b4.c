/* Purpose: blend current and saved transforms recursively through a node tree. */
extern void FUN_08877504(float,float,void*,void*,void*);
void FUN_088809b4(float a,float b,unsigned char*node){while(node){float*current=(float*)(node+0x1b0),*saved=(float*)(node+0x240);int i;for(i=0;i<3;i++)current[i]=current[i]*a+saved[i]*b;FUN_08877504(a,b,node+0x170,node+0x170,node+0x200);if(*(void**)(node+0x14c))FUN_088809b4(a,b,*(unsigned char**)(node+0x14c));node=*(unsigned char**)(node+0x148);}}
