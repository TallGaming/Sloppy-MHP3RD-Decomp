/* Purpose: adjust a game record value from the status byte and first matching key. */
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;

struct Record0883eb6c {
    u8 before_mirror[0x246];
    u16 mirrored_value;
    u8 before_value[0x288 - 0x248];
    u16 value;
};

extern s8 FUN_0886d7a4(void);
extern int FUN_088a52b0(const u8 *record, u8 value);

void FUN_0883eb6c(void *unused, void *record)
{
    struct Record0883eb6c *fields = record;
    short value = FUN_0886d7a4() + 100;

    if (FUN_088a52b0(record, 13))
        value += 20;
    else if (FUN_088a52b0(record, 14))
        value += 50;
    else if (FUN_088a52b0(record, 15))
        value -= 10;
    else if (FUN_088a52b0(record, 16))
        value -= 30;

    if (value > 150)
        value = 150;
    fields->value = (u16)value;
    fields->mirrored_value = (u16)value;
}
