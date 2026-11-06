/* Purpose: derive and clamp a short delay into the range 150 through 900. */
extern void *D_08aace80;
extern short FUN_0886d7c0(void *object);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_0883ec48(unsigned int unused, void *record)
{
    short value = FUN_0886d7c0(D_08aace80) + 600;
    short result = 150;
    (void)unused;
    if (value > 149) {
        if (value < 901)
            result = value;
        else
            result = 900;
    }
    FIELD(record, short, 0xbba) = result;
}
