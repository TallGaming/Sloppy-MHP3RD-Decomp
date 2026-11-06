/* Purpose: decrypt, validate, and unpack up to one hundred archive records. */
extern unsigned char D_089cff50[];
extern unsigned char D_08966eac[];
extern char D_08966ec4[];
extern void FUN_0888df2c(void *, void *, unsigned int, const void *, int);
extern void FUN_088ebb10(void *, int, unsigned int);
extern void FUN_088ebb18(void *, const void *, unsigned int);
extern void FUN_0881a0d0(void *, int, void *);
extern int FUN_0880bff4(const void *, const void *, unsigned int);
extern int FUN_0888dc48(void *, void *, const void *, void *);
extern void FUN_0888d71c(void *, void *, int);
extern void *FUN_08960ae8(const char *, int, int, int);
extern void FUN_08960ad8(void *, void **);
extern void FUN_08960b00(void *);

int FUN_0888e2ac(unsigned char *state, unsigned char *archive,
                 unsigned char preserve_encrypted)
{
    unsigned char saved_header[36];
    unsigned char computed[20];
    void *resource;
    void *handle;
    int index;
    int success = 0;

    FUN_0888df2c(state, archive, 0x2590000, D_089cff50, 1);
    FUN_088ebb18(saved_header, archive + 0x258fdc, 36);
    FUN_088ebb18(archive + 0x258fdc, D_08966eac, 20);
    FUN_0881a0d0(archive, 0x258ff0, computed);
    FUN_088ebb18(archive + 0x258fdc, saved_header, 36);

    handle = FUN_08960ae8(D_08966ec4, 0, 0x6000, 0);
    FUN_08960ad8(handle, &resource);
    if (FUN_0880bff4(computed, saved_header + 12, 20) != 0)
        goto done;

    FUN_088ebb10(state + 0x1490, 0, 0x10cc);
    for (index = 0; index < 100; index++) {
        unsigned char *entry =
            *(unsigned char **)(state + 0x950) + index * 0x6010;
        int decoded_size;

        if (*(unsigned int *)entry == 0)
            continue;
        decoded_size = FUN_0888dc48(state, resource, entry,
                                    state + 0x954 + index * 28);
        if (decoded_size == 0)
            continue;
        FUN_0888d71c(state, resource, index);
        if (!preserve_encrypted)
            FUN_088ebb18(entry, resource, decoded_size);
    }
    success = 1;

done:
    FUN_08960b00(handle);
    return success;
}
