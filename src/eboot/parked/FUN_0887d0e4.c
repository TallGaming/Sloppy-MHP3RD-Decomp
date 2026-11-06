/* Purpose: resend expired queued records and remove completed entries. */
extern unsigned char *D_08aad3d8;
extern int D_08aad3d0;
extern unsigned long long FUN_08960c30(void);
extern void FUN_0880c088(void *, const void *, int);
extern int FUN_0887aefc(int, void *, unsigned short, const void *, int);

int FUN_0887d0e4(int context)
{
    unsigned long long now = FUN_08960c30();
    int offset = 0;
    while (offset < D_08aad3d0) {
        unsigned char header[32];
        unsigned short length;
        short retries;
        int sent;
        FUN_0880c088(header, D_08aad3d8 + offset, 32);
        length = *(unsigned short *)(header + 0x1c);
        retries = *(short *)(header + 0x1e);
        if (*(unsigned long long *)header + 250000 > now) {
            offset += length + 32;
            continue;
        }
        sent = FUN_0887aefc(context, header + 8, *(unsigned short *)(header + 0x18),
                            D_08aad3d8 + offset + 32, (short)length);
        if (sent < 0) return sent;
        if (sent != length) return -12;
        retries--;
        *(unsigned long long *)header = now;
        *(short *)(header + 0x1e) = retries;
        if (retries == 0) {
            int size = length + 32;
            FUN_0880c088(D_08aad3d8 + offset, D_08aad3d8 + offset + size,
                         D_08aad3d0 - offset - size);
            D_08aad3d0 -= size;
        } else {
            FUN_0880c088(D_08aad3d8 + offset, header, 32);
            offset += length + 32;
        }
    }
    return 0;
}
