/* FUN_088f2554: reset four memory-region descriptors after a global dispatch.
 * Main EBOOT, non-G2 group-B medium match. Names and types are hypotheses. */
typedef unsigned short u16;extern void*D_08a3387c;void FUN_08864dc4(void*,int);
void FUN_088f2554(u16*p){int i=0;FUN_08864dc4(D_08a3387c,4);do{i++;p[0]=0;p[1]=0xffff;*(int*)(p+2)=0;*(int*)(p+4)=0;p+=6;}while(i!=4);}
