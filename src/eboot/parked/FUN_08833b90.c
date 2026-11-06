/*
 * FUN_08833b90 field and ABI view.
 *
 * This uncompiled partial records the verified edges of a packet-producing
 * sequence.  The target obtains state through FUN_0882fc38, clears an
 * unresolved fixed extent through the typed fill thunk, writes a big-endian
 * 16-bit value at packet offset 0xC through FUN_0882fea4, and reaches a
 * local coordinator FUN_08833af8.  Five remaining helper contracts are
 * PARKED or unclassified, so this is not a whole-function C candidate.
 * The coordinator itself has four direct callers and a separately retained
 * partial; neither fact establishes this target's externally callable ABI.
 */

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

extern void *FUN_0882fc38(void);
extern void *FUN_088ebb10(void *destination, int value, u32 size);
extern void FUN_0882fea4(u8 *buffer, u16 value);

struct Fun08833b90PacketView {
    u8 header[12];
    u8 big_endian_value[2];
};

