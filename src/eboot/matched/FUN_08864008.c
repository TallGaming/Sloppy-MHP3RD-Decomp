/* Purpose: perform an available transfer or signal that its request is pending. */
extern unsigned int FUN_08863fa0(void *object, const void *request);
extern void FUN_088ebb18(int end, void *buffer, unsigned int value);
extern void FUN_08960c70(void);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_08864008(void *object, const void *request)
{
    unsigned int *pending;
    if (FUN_08863fa0(object, request) != 0) {
        FUN_088ebb18(FIELD(request, int, 4) + FIELD(request, int, 0x0c),
                     (unsigned char *)object + 0x9780,
                     FIELD(request, unsigned int, 8));
        FUN_08960c70();
        return;
    }
    pending = FIELD(request, unsigned int *, 0x14);
    if (pending != 0)
        *pending = 1;
}
