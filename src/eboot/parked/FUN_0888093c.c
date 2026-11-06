/* Purpose: copy the current matrix block recursively through a node tree. */
void FUN_0888093c(unsigned char*node){while(node){unsigned int*in=(unsigned int*)(node+0x170),*out=(unsigned int*)(node+0x200);int i;for(i=0;i<19;i++)out[i]=in[i];if(*(void**)(node+0x14c))FUN_0888093c(*(unsigned char**)(node+0x14c));node=*(unsigned char**)(node+0x148);}}
