/* Purpose: initialize a small state record from count, byte, and mode inputs. */
#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_08861dc4(void *object, short count, unsigned char value, int mode)
{
    FIELD(object, short, 0x20) = count;
    if (count < 1)
        FIELD(object, unsigned short, 0x20) = 1;
    FIELD(object, unsigned char, 0x24) = value;
    FIELD(object, unsigned short, 0x22) = 0;
    if (mode == 1) {
        FIELD(object, unsigned int, 0x18) = 2;
        FIELD(object, unsigned char, 0x25) = 0xff;
    } else if (mode == 2) {
        FIELD(object, unsigned int, 0x18) = 3;
        FIELD(object, unsigned char, 0x25) = 0xff;
    } else {
        FIELD(object, unsigned int, 0x18) = 1;
        FIELD(object, unsigned char, 0x25) = 0;
    }
    FIELD(object, unsigned char, 0x26) = FIELD(object, unsigned char, 0x2b);
}
