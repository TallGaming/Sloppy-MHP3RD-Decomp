/*
 * FUN_088a6100: append one entry to bounded parallel byte arrays.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: three duplicated-branch/volatile forms remain shorter and different.
 */
typedef unsigned char u8;
void FUN_088a6100(u8 *o,signed char kind,u8 *count,u8 a,u8 b)
{ u8 i=*count; if(i<10){ o[0xc06+i]=kind; if(kind==0){ o[0xbca+i]=b; *count=*count+1; }
 else { o[0xbc0+i]=a; o[0xbca+i]=b; *count=*count+1; } } }
