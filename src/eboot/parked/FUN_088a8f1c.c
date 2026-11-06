/*
 * FUN_088a8f1c: allocate a small record and fill its three values.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: allocation/fill source compiles to a substantially shorter frame.
 */
typedef unsigned int u32; u32 *FUN_088a8ed4(void);
int FUN_088a8f1c(void *unused,u32 a,u32 b,u32 c){ u32 *p=FUN_088a8ed4(); if(!p)return -1; p[1]=b;p[2]=c;p[0]=a;return a; }
