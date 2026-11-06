/* Purpose: invoke an object's method and mark the owner when it succeeds. */
typedef int (*Method)(void *object);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_0882a148(void *owner, void *object)
{
    void *table = *(void **)object;
    Method method = FIELD(table, Method, 0x134);
    if (method(object) != 0)
        FIELD(owner, unsigned char, 0xde1) = 1;
}
