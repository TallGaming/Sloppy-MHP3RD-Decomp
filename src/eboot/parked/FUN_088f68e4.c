/* Project one four-float vector from another. PARKED: scalar structural draft. */
typedef struct{float x,y,z,w;} Vec4;
void FUN_088f68e4(int unused,Vec4*a,Vec4*b,Vec4*out){float d=a->x*b->x+a->y*b->y+a->z*b->z;float s=d-b->w;out->x=a->x-b->x*s;out->y=a->y-b->y*s;out->z=a->z-b->z*s;out->w=a->w-b->w*s;}
