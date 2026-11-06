/* Purpose: initialize event state and mark one of five pending event classes. */
#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_088657e8(void *object, unsigned int event, unsigned int argument)
{
    if (FIELD(object, signed char, 0x2978c) == 0) {
        FIELD(object, unsigned char, 0x2978c) = 1;
        FIELD(object, unsigned int, 0x29790) = 0;
    }
    switch (event) {
    case 1:
        FIELD(object, unsigned int, 0x29788) |= 1;
        return;
    case 2:
        FIELD(object, unsigned int, 0x29794) = argument;
        FIELD(object, unsigned int, 0x29788) |= 2;
        return;
    case 3:
        FIELD(object, unsigned int, 0x29788) |= 4;
        return;
    case 4:
        FIELD(object, unsigned int, 0x29788) |= 0x0c;
        return;
    case 5:
        FIELD(object, unsigned int, 0x29788) |= 0x10;
        return;
    }
}
