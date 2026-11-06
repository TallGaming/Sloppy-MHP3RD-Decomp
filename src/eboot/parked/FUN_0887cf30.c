/* Purpose: append a framed network record and its payload to a global buffer. */
extern unsigned int D_08aad3d0;
extern unsigned int D_08aad3d4;
extern unsigned char *D_08aad3d8;
extern int D_08aad3ec;
extern int FUN_0887c4bc(int);
extern void FUN_0880c088(void *, const void *, int);

typedef struct RecordHeader {
    int first;
    int reserved;
    int zero_a;
    int zero_b;
    unsigned char address[16];
    unsigned short kind;
    short length;
    short copies;
} RecordHeader;

int FUN_0887cf30(int unused, const void *address, unsigned short kind,
                 const void *payload, short length, short copies)
{
    RecordHeader header;
    int payload_size = length;

    (void)unused;
    if (D_08aad3d4 < D_08aad3d0 + payload_size + 36U)
        return -12;

    header.zero_a = 0;
    header.zero_b = 0;
    FUN_0880c088(header.address, address, 6);
    header.kind = kind;
    header.length = length + 4;
    header.copies = 1;
    if (copies == 0) {
        header.first = FUN_0887c4bc(0);
    } else {
        header.copies = copies;
        header.first = FUN_0887c4bc(D_08aad3ec);
        D_08aad3ec += payload_size + 4;
    }

    FUN_0880c088(D_08aad3d8 + D_08aad3d0, &header.zero_a, 32);
    D_08aad3d0 += 32;
    FUN_0880c088(D_08aad3d8 + D_08aad3d0, &header.first, 4);
    D_08aad3d0 += 4;
    FUN_0880c088(D_08aad3d8 + D_08aad3d0, payload, payload_size);
    D_08aad3d0 += payload_size;
    return payload_size;
}
