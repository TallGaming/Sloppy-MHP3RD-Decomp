/*
 * FUN_088e6188: create and start the priority-changer thread.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact-size thread setup retains four string/callback/global differences.
 */
extern char s_priorityChanger_08968d28[]; extern void LAB_088e66b4(void); extern int D_09bc1ed8; int FUN_08960bd0(char *,void *,int,int,int,int); void FUN_08960b78(int,int,void *);
void FUN_088e6188(unsigned char *owner){int thread=FUN_08960bd0(s_priorityChanger_08968d28,LAB_088e66b4,0x28,0x200,0,0);*(int *)(owner+0x110158c)=thread;FUN_08960b78(thread,4,&D_09bc1ed8);}
