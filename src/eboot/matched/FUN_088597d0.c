/*
 * Purpose: wait for the audio synchronization semaphore, clear the shared
 * command words under the existing interrupt-depth guard, then release it.
 */
typedef int SceUID;
typedef unsigned int u32;

extern SceUID D_08a3338c;
extern u32 D_08a31df4;
extern u32 D_08a31df8;
extern unsigned char D_08a32180[];
extern u32 D_08a33380;
extern u32 D_08a33384;
extern u32 D_08a33388;
extern u32 D_08a33390;
extern u32 FUN_08960a50(void);
extern void *FUN_088ebb10(void *destination, int value, unsigned int size);
extern void FUN_08960a68(u32 flags);
extern int FUN_08960bc0(SceUID semaid, int signal);
extern int FUN_08960bd8(SceUID semaid, int signal, u32 *timeout);

void FUN_088597d0(void)
{
    FUN_08960bd8(D_08a3338c, 1, 0);
    if (D_08a31df8++ == 0)
        D_08a31df4 = FUN_08960a50();
    FUN_088ebb10(D_08a32180, 0, 0x1200);
    D_08a33390 = 0;
    D_08a33384 = 0;
    D_08a33388 = 0;
    D_08a33380 = 0;
    if (D_08a31df8 != 0 && --D_08a31df8 == 0)
        FUN_08960a68(D_08a31df4);
    FUN_08960bc0(D_08a3338c, 1);
}
