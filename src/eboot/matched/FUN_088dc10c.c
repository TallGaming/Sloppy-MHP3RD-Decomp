typedef unsigned char u8;
typedef int s32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

/* Purpose hypothesis: reset four fields in an object. */
extern float D_089685c0;

void FUN_088dc10c(void *object)
{
    float value = D_089685c0;
    float *tail = (float *)((u8 *)object + 160);

    FIELD(object, s32, 128) = 0;
    FIELD(object, float, 136) = value;
    tail[23] = value;
    tail[24] = value;
}
