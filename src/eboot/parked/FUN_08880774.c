/* Purpose: rebuild inverse transforms recursively through a node tree. */
extern void FUN_08875a3c(void*,void*,void*);extern void FUN_08875fbc(void*,void*);
void FUN_08880774(unsigned char*node,void*parent){while(node){void*matrix=node+0x90;FUN_08875a3c(matrix,node+0x170,parent);FUN_08875fbc(node+0x10,matrix);if(*(void**)(node+0x14c))FUN_08880774(*(unsigned char**)(node+0x14c),matrix);node=*(unsigned char**)(node+0x148);}}
