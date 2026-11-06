/* Purpose: test whether an object flag selects an allowed state code. */
#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

unsigned int FUN_0882a844(const void *object)
{
    unsigned int index;
    if (FIELD(object, signed char, 0xc31) != 0) {
        index = (FIELD(object, unsigned char, 0xc8e) - 0x4a) & 0xff;
        if (index <= 0x19) {
            if (((1u << (index & 0x1f)) & 0x03fffbff) != 0)
                return 1;
        }
    }
    return 0;
}
