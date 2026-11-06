/* Purpose: advance a peer-query request and retry until a matching peer appears. */
extern unsigned char *D_08ab4650;
extern int FUN_08885608(void *, const void *, int, int);
extern void FUN_08885088(void *);

static int identifier_equal(const unsigned char *left,
                            const unsigned char *right)
{
    int i;
    for (i = 0; i < 6; i++)
        if (left[i] != right[i]) return 0;
    return 1;
}

void FUN_08887b58(unsigned char *request)
{
    unsigned char *object = D_08ab4650;
    int count;
    int i;

    if (*(int *)(request + 0x0c) == 0) {
        FUN_08885608(object, request + 3, *(int *)(request + 0x18),
                     *(int *)(request + 0x1c));
        *(int *)(request + 0x10) = 150;
        *(int *)(request + 0x0c) = 1;
        request[1] = 1;
        request[2] = 5;
    } else if (*(int *)(request + 0x0c) != 1) {
        return;
    }

    count = *(signed char *)(object + 0x17af);
    for (i = 0; i < count; i++) {
        unsigned char *peer = object + 0x818 + i * 0x14c;
        if (identifier_equal(request + 3, peer))
            break;
    }
    if (i == count) {
        FUN_08885088(request);
        *(int *)(request + 0x14) = 2;
    }

    if (request[1] == 0) {
        FUN_08885088(request);
        *(int *)(request + 0x14) = 0;
        return;
    }
    if (--*(int *)(request + 0x10) < 0) {
        if (--*(signed char *)(request + 2) < 0) {
            FUN_08885088(request);
            *(int *)(request + 0x14) = 2;
        } else {
            FUN_08885608(object, request + 3, *(int *)(request + 0x18),
                         *(int *)(request + 0x1c));
            *(int *)(request + 0x10) = 150;
        }
    }
}
