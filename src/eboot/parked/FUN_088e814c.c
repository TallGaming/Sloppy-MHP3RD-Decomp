/*
 * FUN_088e814c: construct a four-handle rendering resource bundle.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact instruction count retains seven stack/global differences.
 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u8 D_089ed800[];
u32 FUN_08960d78(void *, void *);
void FUN_08960d60(u32, void *);
void thunk_FUN_0880c468(void *, int, int);
u32 FUN_08960d50(u32, void *, void *);
u32 FUN_08960d88(u32, u32, int, void *);
void FUN_08960d58(u32, void *);

void FUN_088e814c(u32 *result)
{
    u8 token[4];
    u8 setup[0xa8];
    u32 value;

    value = FUN_08960d78(D_089ed800, token);
    result[0] = value;
    FUN_08960d60(value, token);
    thunk_FUN_0880c468(setup, 0, 0xa8);
    *(u16 *)(setup + 0x1a) = 1;
    *(u16 *)(setup + 0x14) = 0;
    *(u16 *)(setup + 0x16) = 0;
    value = FUN_08960d50(result[0], setup, token);
    result[1] = value;
    value = FUN_08960d88(result[0], value, 0, token);
    result[2] = value;
    FUN_08960d58(value, result + 3);
}
