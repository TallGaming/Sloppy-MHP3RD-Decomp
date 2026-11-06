/* FUN_088ffd94: draw a command after adding a two-short screen offset.
 * Main EBOOT, non-G2 group-B medium match. Names and layout are hypotheses. */
typedef short s16; typedef unsigned int u32; extern void*D_09beb0bc;void FUN_088ff8f0(void*,void*,u32,int,int,int,u32,int,int,int);
void FUN_088ffd94(char*offset,u32*cmd){FUN_088ff8f0(D_09beb0bc,(void*)cmd[0],cmd[1],0,(s16)((s16)*(int*)(offset+4)+*(s16*)((char*)cmd+16)),(s16)((s16)*(int*)(offset+8)+*(s16*)((char*)cmd+18)),cmd[2],-1,-1,0);}
