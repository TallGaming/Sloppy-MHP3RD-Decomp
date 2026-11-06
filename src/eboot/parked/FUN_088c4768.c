/*
 * FUN_088c4768: load three sound modules, wait for readiness, and signal completion.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: module loads and virtual readiness loop remain longer and different.
 */
typedef int (*Ready)(void); extern void *D_08a3387c; extern unsigned char D_089e87e0[]; int FUN_08960fa0(int); void FUN_08960c00(int); void FUN_08960c18(int);
int FUN_088c4768(void *unused,unsigned char **argument){unsigned char *owner=*argument;*(int *)(owner+0x727da8)=FUN_08960fa0(0x300);*(int *)(owner+0x727dac)=FUN_08960fa0(0x301);*(int *)(owner+0x727db0)=FUN_08960fa0(0x302);*(void **)(owner+0x2f8d44)=D_089e87e0;while(((Ready)(*(void ***)D_08a3387c)[13])())FUN_08960c00(10000);owner[0x727da1]=1;FUN_08960c18(0);return 0;}
