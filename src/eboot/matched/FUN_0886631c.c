/* Purpose: update a saturating frame counter once every thirty ticks. */
#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_0886631c(void *object)
{
    unsigned short tick = FIELD(object, short, 0x1a) + 1;
    FIELD(object, unsigned short, 0x1a) = tick;
    if (tick % 30 == 0) {
        unsigned int count = FIELD(object, int, 0x50f4) + 1;
        FIELD(object, unsigned int, 0x50f4) = count;
        if (count > 35999999)
            FIELD(object, unsigned int, 0x50f4) = 35999999;
    }
}
