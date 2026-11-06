/* FUN_08956d34: set the active flag on a linked child by identifier.
 * Main EBOOT, attempt-high-01 medium batch 21. Node roles are hypotheses. */
typedef unsigned int u32;
void FUN_08956d34(unsigned char *owner,int identifier){unsigned char *node;if(*(int *)(owner+0x30)==0)return;node=*(unsigned char **)(owner+0x2c);if(node==0)return;do{if(*(int *)(node+0x30)==identifier){*(u32 *)(node+0x48)|=8;return;}node=*(unsigned char **)(node+4);}while(node!=0);}
