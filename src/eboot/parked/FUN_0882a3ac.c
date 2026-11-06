/* Purpose: derive a small state code from three object flag bytes. */
#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

int FUN_0882a3ac(const void *object)
{
    int result = FIELD(object, signed char, 0xc8f);
    if (result == 0) {
        result = 0;
        if (FIELD(object, signed char, 0xde0) == 0) {
            if (FIELD(object, signed char, 0xc8e) != 0)
                result = 2;
        } else {
            result = 2;
        }
    }
    return result;
}
