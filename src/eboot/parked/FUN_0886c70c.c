/* Purpose: validate a mode request against one object state byte. */
#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

unsigned int FUN_0886c70c(const void *object, signed char requested)
{
    unsigned int result = 0;
    if (FIELD(object, signed char, 0x6047a) != 0) {
        if (requested == 1) {
            if (FIELD(object, signed char, 0x6047a) != 4)
                result = 1;
        } else {
            result = 1;
        }
    }
    return result;
}
