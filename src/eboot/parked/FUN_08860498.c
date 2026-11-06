/* Purpose: start a selected session mode and notify the related network services. */
extern void *D_09bb7e74;
extern void *D_09bb7e78;
extern void *D_09bb7a80;
extern void *D_09da9600;
extern unsigned char *D_08aace80;
extern void FUN_088c8c48(void *, int);
extern void FUN_0886eda4(void *, unsigned short);
extern void FUN_088c7380(void *, int);
extern void FUN_088bc098(void *);
extern void func_0x09c5f670(void *, int);
extern void func_0x09c5f918(void *);
extern void func_0x09c7216c(void *);

int FUN_08860498(unsigned char *state, unsigned char *request)
{
    unsigned char *selection = *(unsigned char **)(request + 0x14);
    int result = 1;

    FUN_088c8c48(D_09bb7e74, 0);
    state[0x78] = 0;
    D_08aace80[0x6bc] = 0;
    FUN_0886eda4(D_08aace80, *(unsigned short *)selection);
    if (D_08aace80[0x718] == 0) {
        unsigned char mode = selection[0xb];
        if (mode == 2)
            func_0x09c5f670(D_09bb7e74, 1);
        else if (mode == 3)
            func_0x09c5f670(D_09bb7e74, 7);
        else if (mode == 1) {
            FUN_088c7380(D_09bb7e78, 0);
            func_0x09c5f918(D_09bb7e74);
        }
        FUN_088bc098(D_09bb7a80);
        func_0x09c7216c(D_09da9600);
        result = 0;
    }
    return result;
}
