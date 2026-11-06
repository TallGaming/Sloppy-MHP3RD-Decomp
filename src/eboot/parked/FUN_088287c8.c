/* Purpose: report whether three handles are clear and the selected state is not six. */
extern unsigned char *D_08a20fec;

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

int FUN_088287c8(void)
{
    unsigned char *base = D_08a20fec;
    int result = FIELD(base, int, 0x124);
    if (result == 0) {
        result = FIELD(base, int, 0x128);
        if (result == 0) {
            result = FIELD(base, int, 0x12c);
            if (result == 0) {
                result = 7;
                unsigned int index = base[0x23];
                if (base[index + 0x68] != 6)
                    result = 0;
            }
        }
    }
    return result;
}
