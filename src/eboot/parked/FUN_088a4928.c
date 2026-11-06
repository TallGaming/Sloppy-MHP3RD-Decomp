/*
 * FUN_088a4928: interpolate a value from a sentinel-terminated float key table.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: scalar float interpolation cannot reproduce the reference VFPU flow.
 */
extern float D_08967408,D_0896740c;
float FUN_088a4928(float x,void *unused,float *p)
{ for(;;){ float key=p[0]; if(key>D_08967408){ if(key<D_0896740c)return p[1]; }
    else if(key<=x){ if(x<p[2]) return p[1]+(p[3]-p[1])*((x-key)/(p[2]-key)); p+=2; continue; }
    p+=2; } }
