/*
 * Purpose/hypothesis: initialize an old newlib-shaped reentrancy state.
 * The observed layout contains three embedded 0x5c-byte stream records at
 * +0x268, +0x2c4, and +0x320.  Constants at +0xb0..+0xbc match the rand48
 * seed/multiplier/add initializer in the public newlib-1.12-style
 * _REENT_INIT_PTR form; its explicit byte loops also agree.  The exact
 * runtime wrapper and original compiler remain unproved.
 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

#define FIELD(p, t, off) (*(t *)((u8 *)(p) + (off)))

extern const char D_08963148[];
extern void FUN_0880c468(void *destination, int value, u32 length);

void FUN_0880c878(void *state)
{
    u8 *bytes = (u8 *)state;
    void *stdout_record = bytes + 0x2c4;
    void *stderr_record = bytes + 0x320;
    void *stdin_record = bytes + 0x268;
    u32 index;

    FIELD(state, void *, 0x08) = stdout_record;
    FIELD(state, void *, 0x0c) = stderr_record;
    FIELD(state, u32, 0x00) = 0;
    FIELD(state, void *, 0x04) = stdin_record;
    FIELD(state, u32, 0x10) = 0;
    index = 0;
    do {
        bytes[0x14 + index] = 0;
        index++;
    } while (index != 0x19);

    FIELD(state, u32, 0x30) = 0;
    FIELD(state, const char *, 0x34) = D_08963148;
    FIELD(state, u32, 0x38) = 0;
    FIELD(state, u32, 0x3c) = 0;
    FIELD(state, u32, 0x40) = 0;
    FIELD(state, u32, 0x44) = 0;
    FIELD(state, u32, 0x48) = 0;
    FIELD(state, u32, 0x4c) = 0;
    FIELD(state, u32, 0x50) = 0;
    FIELD(state, u32, 0x54) = 0;
    FIELD(state, u32, 0x58) = 0;
    FIELD(state, u32, 0x5c) = 0;
    bytes[0x60] = 0;
    index = 0;
    do {
        bytes[0x7c + index] = 0;
        index++;
    } while (index != 0x24);

    FIELD(state, u32, 0xa0) = 0;
    FIELD(state, u32, 0xa8) = 1;
    FIELD(state, u32, 0xac) = 0;
    FIELD(state, u16, 0xb0) = 0x330e;
    FIELD(state, u16, 0xb2) = 0xabcd;
    FIELD(state, u16, 0xb4) = 0x1234;
    FIELD(state, u16, 0xb6) = 0xe66d;
    FIELD(state, u16, 0xb8) = 0xdeec;
    FIELD(state, u16, 0xba) = 5;
    FIELD(state, u16, 0xbc) = 11;
    FIELD(state, u32, 0xc0) = 0;
    FIELD(state, u32, 0xc4) = 0;
    FIELD(state, u32, 0xc8) = 0;
    FIELD(state, u32, 0xcc) = 0;
    FIELD(state, u32, 0xd0) = 0;
    FIELD(state, u32, 0xd4) = 0;
    bytes[0xd8] = 0;
    bytes[0xe0] = 0;
    FIELD(state, u32, 0xf8) = 0;
    FIELD(state, u32, 0xfc) = 0;
    FIELD(state, u32, 0x100) = 0;
    FIELD(state, u32, 0x104) = 0;
    FIELD(state, u32, 0x108) = 0;
    FIELD(state, u32, 0x10c) = 0;
    FIELD(state, u32, 0x110) = 0;
    FIELD(state, u32, 0x114) = 0;
    FIELD(state, u32, 0x118) = 0;
    FIELD(state, u32, 0x11c) = 0;
    FIELD(state, u32, 0x120) = 0;
    FIELD(state, u32, 0x148) = 0;
    FIELD(state, u32, 0x14c) = 0;
    FIELD(state, u32, 0x150) = 0;
    FIELD(state, u32, 0x154) = 0;
    FIELD(state, u32, 0x1d4) = 0;
    FIELD(state, u32, 0x254) = 0;
    FIELD(state, u32, 0x258) = 0;
    FIELD(state, u32, 0x25c) = 0;
    FIELD(state, u32, 0x260) = 0;
    FUN_0880c468(bytes + 0x268, 0, 0x114);
    FIELD(state, u32, 0x37c) = 0;
}
