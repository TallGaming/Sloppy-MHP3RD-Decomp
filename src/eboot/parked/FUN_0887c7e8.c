/* Purpose: remove one linked callback and wake a waiting owner. */
extern void FUN_0887c4f4(void);extern void FUN_08960bc0(unsigned int,int);
void FUN_0887c7e8(unsigned char*object,int key){unsigned int*node;FUN_0887c4f4();node=*(unsigned int**)(object+0x18);while(node[2]!=*(unsigned int*)(object+0x1c)){unsigned int*next=(unsigned int*)node[2];if(next[1]==(unsigned int)key){next[0]=0;node[2]=next[2];next[1]=next[2]=0;break;}node=next;}if(*(short*)(object+0x14)!=0)FUN_08960bc0(*(unsigned int*)0x08aad344,1);}
