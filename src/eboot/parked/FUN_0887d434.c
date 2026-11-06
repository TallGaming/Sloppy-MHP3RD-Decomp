/*
 * Purpose: initialize a small callback-bearing object.
 * Hypothesis: the surrounding object layout is not known yet.
 */
typedef void (*Callback)(void);

extern void FUN_0887d320(void);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_0887d434(void *object)
{
    FIELD(object, Callback, 4) = FUN_0887d320;
    FIELD(object, unsigned int, 8) = 0;
    FIELD(object, unsigned int, 0x18) = 0;
}
