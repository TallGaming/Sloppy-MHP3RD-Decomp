#ifndef LARGE_SCREEN_TEARDOWN_H
#define LARGE_SCREEN_TEARDOWN_H

extern void *D_09beb090;
extern void *D_08aacea0;
extern void *D_08aacea4;
extern unsigned char D_0896a9a0;
extern unsigned char D_0896a9b8;
extern unsigned char D_0896a9e0;
extern unsigned char D_0896aa28;
extern unsigned char D_0896a8c0;
extern unsigned char D_0896aad0;
extern unsigned char D_0896a890;

extern void FUN_088ef994(void *, int);
extern void FUN_088f9cdc(void *);
extern void FUN_088f9cc8(void *);
extern void FUN_088f9fb4(void *);
extern void FUN_089016c4(void *);

typedef void (*ScreenDestructor)(void *);

static void destroy_range(unsigned char *begin, unsigned char *end,
                          int stride, ScreenDestructor destructor)
{
    unsigned char *item;

    if (begin == end)
        return;

    for (item = end; item != begin;) {
        item -= stride;
        destructor(item);
    }
}

static void destroy_virtual_range(unsigned char *begin, unsigned char *end,
                                  int stride)
{
    unsigned char *item;

    if (begin == end)
        return;

    for (item = end; item != begin;) {
        ScreenDestructor destructor;
        item -= stride;
        destructor = *(ScreenDestructor *)*(void **)item;
        destructor(item);
    }
}

/* Tear down the many embedded controls and render records owned by this screen. */
static void teardown_large_screen(void *value)
{
    unsigned char *object = value;
    unsigned char *body = object + 0xc0;

    *(void **)object = &D_0896a9a0;
    FUN_088ef994(D_09beb090, 3);
    *(void **)(object + 0xc0) = &D_0896a9b8;

    destroy_range(object + 0x4240, object + 0x44c0, 80, FUN_088f9cdc);
    destroy_virtual_range(body + 0x4148, body + 0x4160, 8);
    destroy_range(body + 0x4008, body + 0x4148, 80, FUN_088f9cdc);

    *(void **)(body + 0x3fec) = &D_0896a9e0;
    FUN_089016c4(body + 0x3fec);
    destroy_virtual_range(body + 0x3fd0, body + 0x3fe8, 8);
    destroy_range(body + 0x3e90, body + 0x3fd0, 80, FUN_088f9cdc);

    *(void **)(body + 0x3e74) = &D_0896a9e0;
    FUN_089016c4(body + 0x3e74);
    destroy_range(body + 0x3b20, body + 0x3da0, 80, FUN_088f9cdc);
    destroy_range(body + 0x37fc, body + 0x3b20, 96, FUN_088f9fb4);
    destroy_range(body + 0x34d0, body + 0x37f0, 80, FUN_088f9cdc);
    destroy_range(body + 0x3240, body + 0x3470, 80, FUN_088f9cdc);

    destroy_range(body + 0x2888, body + 0x3230, 80, FUN_088f9cdc);
    *(void **)(body + 0x2860) = &D_0896a9e0;
    FUN_089016c4(body + 0x2860);
    *(void **)(body + 0x2844) = &D_0896a9e0;
    FUN_089016c4(body + 0x2844);
    destroy_range(body + 0x2664, body + 0x2844, 80, FUN_088f9cdc);

    destroy_range(body + 0x2388, body + 0x2660, 88, FUN_088f9cc8);
    destroy_virtual_range(body + 0x2308, body + 0x2548, 32);
    destroy_range(body + 0x21a8, body + 0x2308, 88, FUN_088f9cc8);

    *(void **)(body + 0x217c) = &D_0896a9e0;
    FUN_089016c4(body + 0x217c);
    *(void **)(body + 0x2174) = &D_0896aa28;
    FUN_089016c4(body + 0x2174);
    destroy_virtual_range(body + 0x1fc8, body + 0x2170, 84);
    destroy_range(body + 0x1f28, body + 0x1fc8, 80, FUN_088f9cdc);

    FUN_088f9cdc(body + 0x1ed8);
    *(void **)(body + 0x1ed0) = &D_0896a8c0;
    destroy_virtual_range(body + 0x1ca0, body + 0x1ed0, 16);
    destroy_virtual_range(body + 0x1b20, body + 0x1ca0, 96);

    *(void **)(body + 0x1abc) = &D_0896aad0;
    FUN_088f9cdc(body + 0x1ac4);
    *(void **)(body + 0x1abc) = &D_0896a8c0;
    destroy_virtual_range(body + 0x1a5c, body + 0x1abc, 8);

    destroy_range(body + 0x0c9c, body + 0x1a5c, 88, FUN_088f9cc8);
    destroy_range(body + 0x071c, body + 0x0c9c, 88, FUN_088f9cc8);
    destroy_range(body + 0x05b0, body + 0x0710, 88, FUN_088f9cc8);
    FUN_088f9cdc(body + 0x0554);
    FUN_088f9cdc(body + 0x0504);
    destroy_range(body + 0x02d4, body + 0x0504, 80, FUN_088f9cdc);
    destroy_range(body + 0x0194, body + 0x02d4, 80, FUN_088f9cdc);

    *(void **)object = &D_0896a890;
    D_08aacea0 = 0;
    D_08aacea4 = 0;
}

#endif
