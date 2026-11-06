/* Initialize the audio interrupt-protected slot once. */
typedef unsigned int u32;

struct AudioSlot088585a8 {
    u32 value;
    unsigned char initialized;
};

extern int D_08a31df4;
extern u32 D_08a31df8;
extern struct AudioSlot088585a8 D_08a320c8;

/* PSP kernel interrupt suspend and resume imports. */
extern int FUN_08960a50(void);
extern void FUN_08960a68(int flags);

void FUN_088585a8(void)
{
    if (D_08a320c8.initialized)
        return;
    if (D_08a31df8++ == 0)
        D_08a31df4 = FUN_08960a50();
    D_08a320c8.value = 0;
    if (D_08a31df8 != 0 && --D_08a31df8 == 0)
        FUN_08960a68(D_08a31df4);
    D_08a320c8.initialized = 1;
}

