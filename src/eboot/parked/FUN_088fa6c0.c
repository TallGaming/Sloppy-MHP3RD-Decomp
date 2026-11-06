/*
 * FUN_088fa6c0: select one signed byte from a seven-byte global table.
 *
 * Main EBOOT, G2 high-address slice. The table and callee roles are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

struct Bytes_088fa6c0
{
    u32 first;
    u16 second;
    u8 third;
};

void FUN_088fa68c(void *object, int value);

void FUN_088fa6c0(void *object, int index)
{
    struct Bytes_088fa6c0 bytes;

    bytes.third = *(u8 *)0x0896977a;
    bytes.first = *(u32 *)0x08969774;
    bytes.second = *(u16 *)0x08969778;
    FUN_088fa68c(object, ((s8 *)&bytes)[index]);
}
