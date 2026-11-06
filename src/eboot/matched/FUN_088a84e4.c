/* FUN_088a84e4: copy a three-float record selected by a signed-short key.
 * Main EBOOT, non-G2 group-B short-function match. Names and types are hypotheses. */
typedef short s16; typedef struct{float x,y,z,w;} Vec4;char*FUN_0889fbd0(void*,s16);
void FUN_088a84e4(void*ctx,s16 key,Vec4*out){char*p=FUN_0889fbd0(ctx,key);float x=*(float*)(p+0x30),y=*(float*)(p+0x34),z=*(float*)(p+0x38);out->z=z;out->x=x;out->y=y;out->w=0.0f;}
