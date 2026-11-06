/*
 * FUN_088aa64c: construct a two-word mask for a bit count up to sixty-three.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: split-mask loop semantics remain longer and differently lowered.
 */
typedef unsigned int u32;
u32 *FUN_088aa64c(u32 *out,void *unused,u32 bits){ u32 hi=1,lo=0,i=0; out[0]=1;out[1]=0;
 if(bits){ if(bits>31){ if(bits<64)lo=1u<<(bits&31);hi=0;out[0]=hi;out[1]=lo;return out; }
 do{ u32 old=lo>>1;i++;lo=old|0x80000000; if(i==bits){lo=(old&1)>>((-bits)&31);hi=1u<<(bits&31);break;} }while(1); }
 out[0]=hi;out[1]=lo;return out; }
