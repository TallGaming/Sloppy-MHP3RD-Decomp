/*
 * FUN_088c46e0: start the sound proxy loader thread once and pass it the owner.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact-size thread setup retains two string/callback address differences.
 */
extern char s_sndPrxLoader_08968190[]; void FUN_088c4768(void); int FUN_08960bd0(char *,void *,int,int,int,int); void FUN_08960b78(int,int,void *);
void FUN_088c46e0(unsigned char *owner){int args[4],thread;if(owner[0x727da1]!=1){thread=FUN_08960bd0(s_sndPrxLoader_08968190,FUN_088c4768,0x10,0x1000,0,0);*(int *)(owner+0x727da4)=thread;args[0]=(int)owner;FUN_08960b78(thread,4,args);}}
