/* Public reference pinned from Chromium nacl-newlib blob
 * 4c0a9a53569ada72f1449517297d116af32534aa, sf_cos.c. */
#include "fdlibm.h"
#ifdef __STDC__
static const float one=1.0;
#else
static float one=1.0;
#endif
#ifdef __STDC__
float FUN_088082b8(float x)
#else
float FUN_088082b8(x) float x;
#endif
{
  float y[2],z=0.0;
  __int32_t n,ix;
  GET_FLOAT_WORD(ix,x);
  ix &= 0x7fffffff;
  if(ix <= 0x3f490fd8) return __kernel_cosf(x,z);
  else if (!FLT_UWORD_IS_FINITE(ix)) return x-x;
  else {
    n = __ieee754_rem_pio2f(x,y);
    switch(n&3) {
    case 0: return __kernel_cosf(y[0],y[1]);
    case 1: return -__kernel_sinf(y[0],y[1],1);
    case 2: return -__kernel_cosf(y[0],y[1]);
    default: return __kernel_sinf(y[0],y[1],1);
    }
  }
}
