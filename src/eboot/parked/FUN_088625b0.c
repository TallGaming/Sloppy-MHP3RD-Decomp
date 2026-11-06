/* Purpose: update or finalize an embedded digest operation according to request flags. */
extern void FUN_08819ac8(void *, int, int);
extern void FUN_08819c98(void *, void *);
extern void FUN_08819e94(void *);
extern void FUN_0881a0d0(int, int, void *);

void FUN_088625b0(unsigned char *object, unsigned char *request)
{
    int source = *(int *)(request + 4) + *(int *)(request + 0xc);

    if (request[0x19] == 0) {
        unsigned char *context = object + 0x2f4c8;
        if (request[0x1a] == 0) {
            FUN_08819ac8(context, source, *(int *)(request + 8));
            return;
        }
        FUN_08819ac8(context, source, *(int *)(request + 8));
        FUN_08819c98(context, object + 0x2f4b4);
        return;
    }
    if (request[0x1a] == 0) {
        FUN_08819e94(object + 0x2f4c8);
        FUN_08819ac8(object + 0x2f4c8, source, *(int *)(request + 8));
        return;
    }
    FUN_0881a0d0(source, *(int *)(request + 8), object + 0x2f4b4);
}
