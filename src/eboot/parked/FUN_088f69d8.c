/* Clamp a four-component displacement to a maximum length. PARKED: scalar structural draft. */
typedef struct { float x,y,z,w; } Vec4;
float FUN_088760b8(Vec4*); void FUN_08811efc(Vec4*,Vec4*,Vec4*);
float FUN_088f69d8(float limit,int unused,Vec4*from,Vec4*to){Vec4 d;float n;d.x=to->x-from->x;d.y=to->y-from->y;d.z=to->z-from->z;d.w=to->w-from->w;n=FUN_088760b8(&d);if(limit<n){d.x*=limit/n;d.y*=limit/n;d.z*=limit/n;d.w*=limit/n;FUN_08811efc(to,from,&d);}return n-limit;}
