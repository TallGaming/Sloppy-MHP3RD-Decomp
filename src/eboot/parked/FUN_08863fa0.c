/* Purpose: report whether a requested transfer range is immediately available. */
extern unsigned char D_08a31e84[];
extern int FUN_08862434(void *object, int end, unsigned int value);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

unsigned int FUN_08863fa0(void *object, const void *request)
{
    unsigned int available;
    if (D_08a31e84[0x2dd] == 0) {
        available = 1;
    } else {
        int status = FUN_08862434(object,
            FIELD(request, int, 4) + FIELD(request, int, 0x0c),
            FIELD(request, unsigned int, 8));
        available = 0;
        if (status == 0)
            available = 1;
    }
    return available;
}
