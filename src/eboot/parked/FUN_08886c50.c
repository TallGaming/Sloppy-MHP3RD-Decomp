/* Purpose: advance a retrying network request state machine. */
extern unsigned char *D_08ab4650;
extern unsigned char D_08966c48[];
extern void *FUN_08886bc0(void *, const void *);
extern void FUN_08885048(void *);
extern int FUN_08885608(void *, const void *, int, int *);
extern void FUN_0881a0d0(void *, int, void *);
extern void FUN_088ebb10(void *, int, unsigned int);
extern void FUN_088ebb18(void *, const void *, unsigned int);
extern int FUN_0880bff4(const void *, const void *, unsigned int);

void FUN_08886c50(unsigned char *request)
{
    unsigned char *object = D_08ab4650;
    unsigned char *packet;
    void *saved;
    unsigned char reply[32];

    if (*(int *)(request + 8) == 0) {
        if (*(unsigned int *)(object + 0x1bb8) & 0x200)
            return;
        if (object[0x24e4] == 0) {
            FUN_08885048(request);
            *(int *)(request + 0x20) = 3;
        } else {
            *(int *)(request + 0x14) = -1;
            *(int *)(request + 8) = 1;
        }
    } else if (*(int *)(request + 8) != 1) {
        return;
    }

    saved = FUN_08886bc0(object, request + 0x18);
    if (saved == 0) {
        FUN_08885048(request);
        *(int *)(request + 0x20) = 2;
    }

    if (request[0x0c] == 0) {
        int sequence = *(int *)(request + 0x14) + 1;
        *(int *)(request + 0x14) = sequence;
        if (sequence < 34) {
            FUN_08885608(object, request + 0x18, 4,
                         (int *)(request + 0x14));
            request[0x24] = 5;
            *(int *)(request + 0x10) = 150;
            request[0x0c] = 1;
            return;
        }

        packet = *(unsigned char **)(request + 4);
        FUN_088ebb18(packet + 0x20 + *(int *)packet, D_08966c48, 17);
        FUN_0881a0d0(packet + 0x20, *(int *)packet + 16, reply);
        FUN_088ebb10(packet + 0x20 + *(int *)packet, 0, 16);
        FUN_08885048(request);
        if (FUN_0880bff4(reply, packet + 4, 20) != 0)
            *(int *)(request + 0x20) = 2;
        else
            *(int *)(request + 0x20) = 0;
        return;
    }

    if (--*(int *)(request + 0x10) < 0) {
        if (--*(signed char *)(request + 0x24) < 0) {
            FUN_08885048(request);
            *(int *)(request + 0x20) = 2;
        } else {
            FUN_08885608(object, request + 0x18, 4,
                         (int *)(request + 0x14));
            *(int *)(request + 0x10) = 150;
        }
    }
}
