/*
 * Configure a fixed UI record set, then draw resource 0x17 at fixed
 * signed coordinates.  This is a natural candidate from the direct call
 * sequence and the independently typed registered callees.
 */
typedef signed short s16;
typedef unsigned short u16;

extern void *D_09be9f18;
extern void *D_09beb0bc;
extern void *D_08aace80;
extern char D_0897be10[];
extern s16 D_0897bedc;
extern u16 D_0897bede;

void FUN_088e6ff0(void *record, unsigned char first, int second);
void FUN_088e7048(void *record, unsigned char value);
void FUN_088e7054(void *record, unsigned char value);
void FUN_08901000(void *manager, int object, int count, int fourth,
                   s16 fifth, s16 sixth);
int FUN_08867d40(void *manager, u16 value);
void FUN_088eb2e4(void *owner, s16 x, s16 y, char *text);

void FUN_0884c82c(void)
{
    FUN_088e6ff0(D_09be9f18, 14, 14);
    FUN_088e7048(D_09be9f18, 0);
    FUN_088e7054(D_09be9f18, 16);
    FUN_08901000(D_09beb0bc, (int)D_0897be10, 10, 0, 0, 0);
    FUN_088eb2e4(D_09be9f18, D_0897bedc, (s16)D_0897bede,
                 (char *)FUN_08867d40(D_08aace80, 0x17));
}
