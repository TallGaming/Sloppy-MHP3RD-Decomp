/*
 * Purpose: retain the observed global-service and record-field ABI for
 * FUN_0884c5c0 until parked dependency prototypes are recovered.
 */

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

/* Field widths and offsets come from direct target accesses. */
struct StaticContext {
    u8 unknown_000[0x188];
    u32 unknown_188;
    u8 unknown_18c[0x2cc - 0x18c];
    u32 unknown_2cc;
    u8 unknown_2d0[0x2e8 - 0x2d0];
    u16 value_2e8;
    u16 value_2ea;
    u8 unknown_2ec[0x2f0 - 0x2ec];
    u32 unknown_2f0;
};

extern struct StaticContext D_0897bad4;
extern void *D_09be9f18;
extern void *D_09beb0bc;
extern const u8 D_0897bc3c[];

void FUN_088e6ff0(void *record, u8 first, u32 second);
void FUN_088e7048(void *record, u8 value);
void FUN_088e7054(void *record, u8 value);

/* The target invokes both routines once, but their valid prototypes are absent. */
void FUN_088eb2e4(void);
void FUN_08901000(void);

/*
 * No body: the routine stores addresses of stack-local slots through the static
 * context before calling the two parked dependencies. Their lifetime contract,
 * prototypes, and the movn-controlled final argument are open.
 */
