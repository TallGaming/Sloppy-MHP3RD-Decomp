/* Purpose: run an external query, clear a result word, and initialize it. */
typedef void (*ExternalQuery)(unsigned int value);
extern void FUN_08860148(void *object, void *result, const void *data);

#define EXTERNAL_QUERY ((ExternalQuery)0x09c712d0)
#define EXTERNAL_VALUE (*(unsigned int *)0x09da9600)
#define INIT_DATA ((const void *)0x08a061e8)
#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_088601d4(void *object)
{
    EXTERNAL_QUERY(EXTERNAL_VALUE);
    FIELD(object, unsigned int, 0x1c) = 0;
    FUN_08860148(object, (unsigned char *)object + 0x1c, INIT_DATA);
}
