/* Purpose: open a disc-range stream, configure it, start it, and return its handle. */
extern void thunk_FUN_0880c468(void *, int, unsigned int);
extern void FUN_0880e1d4(void *, const char *, int, int);
extern int FUN_08960a40(void *, int, int);
extern int FUN_08960ab0(int, int, void *);
extern void FUN_08960aa0(int, int, int, void *, int);
extern void FUN_08960a20(int);
extern void FUN_08960c00(int);
extern const char s_disc0__sce_lbn0x_x_size0x_x_08966398[];
typedef int (*SizeFn)(void *, unsigned int);

int FUN_08862db8(int *object, unsigned int index, int value)
{
    unsigned char config[20];
    unsigned char result[4];
    unsigned int entry = index & 0xffff;
    int stream;
    int handle;
    SizeFn get_size;

    thunk_FUN_0880c468(config, 0, sizeof(config));
    *(int *)(config + 0) = 0x14;
    *(int *)(config + 4) = value;
    *(int *)(config + 8) = value;
    config[16] = 0;
    config[17] = 1;
    get_size = *(SizeFn *)(*(unsigned char **)object + 0x14);
    FUN_0880e1d4(object + 0x429, s_disc0__sce_lbn0x_x_size0x_x_08966398,
                 object[0x428] + object[entry + 0xe90], get_size(object, entry));
    while ((stream = FUN_08960a40(object + 0x429, 1, 0)) < 0)
        FUN_08960c00(10000);
    while ((handle = FUN_08960ab0(stream, 0, config)) < 0)
        FUN_08960c00(10000);
    FUN_08960aa0(handle, 0, 0, result, 0);
    FUN_08960a20(stream);
    return handle;
}
