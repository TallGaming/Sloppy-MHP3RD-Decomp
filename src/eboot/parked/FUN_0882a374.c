/* Purpose: reset a group of object state fields to their initial values. */
#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_0882a374(void *object)
{
    FIELD(object, unsigned char, 0xc38) = 0;
    FIELD(object, unsigned short, 0xc34) = 0;
    FIELD(object, unsigned char, 0xc8e) = 0;
    FIELD(object, unsigned char, 0xc8f) = 0;
    FIELD(object, unsigned char, 0xcdb) = 0;
    FIELD(object, unsigned int, 0xc90) = 0;
    FIELD(object, unsigned char, 0xe0a) = 1;
    FIELD(object, unsigned char, 0xde0) = 0;
    FIELD(object, unsigned char, 0xcda) = 0;
}
