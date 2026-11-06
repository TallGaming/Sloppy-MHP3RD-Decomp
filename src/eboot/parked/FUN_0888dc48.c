/* Purpose: decode and validate an archive record, optionally returning metadata. */
extern unsigned char D_08966e98[];
extern void FUN_0888dae4(void *, int, short);
extern void FUN_0888db74(void *, int, int, int, int, unsigned int);
extern void FUN_0881a0d0(void *, int, void *);
extern int FUN_0880bff4(const void *, const void *, unsigned int);
extern void FUN_088ebb10(void *, int, unsigned int);
extern void FUN_088ebb18(void *, const void *, unsigned int);

int FUN_0888dc48(void *object, unsigned char *archive,
                 const unsigned short *header, unsigned char *metadata)
{
    unsigned int offset = 0;
    unsigned char digest[20];
    int i;

    for (i = 0; i < 4; i++)
        FUN_0888dae4(object, i, header[i]);
    FUN_0888db74(object, (int)&offset, (int)header, 0, 8, 24);
    if (offset >= 0x6000)
        return 0;

    FUN_0888db74(object, (int)archive, (int)header, 0, 32, 24);
    FUN_088ebb18(archive + offset, D_08966e98, 17);
    FUN_0881a0d0(archive, offset + 16, digest);
    if (FUN_0880bff4(&offset, digest, 20) != 0) {
        if (metadata != 0) {
            *(unsigned int *)metadata = 0;
            FUN_088ebb10(metadata + 8, 0, 20);
        }
        return 0;
    }

    if (metadata != 0) {
        unsigned int end = *(unsigned int *)archive;
        *(unsigned int *)metadata = offset;
        *(unsigned int *)(metadata + 4) =
            *(unsigned short *)(archive + end + 0x1c);
        FUN_088ebb18(metadata + 8, digest, 20);
    }
    return offset;
}
