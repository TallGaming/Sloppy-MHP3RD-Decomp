/*
 * Purpose: retain only verified global submission lanes; this is not a whole
 * candidate.  Artificial target cases establish no read from any of eight
 * supplied scalar lanes.  The modeled path makes three batch submissions and
 * one descriptor dispatch with D_09beb0bc forwarded as each manager lane.
 * It writes four static words and three static bytes, but their object
 * ownership and all descriptor values remain unproved.
 */
typedef unsigned char u8;
typedef short s16;

typedef struct GlobalSubmitRecord {
    u8 opaque[0x24];
} GlobalSubmitRecord;

extern void *D_09beb0bc;
extern void FUN_08900bf0(void *manager, const GlobalSubmitRecord *records,
                          int word4, int count, int word12,
                          s16 half16, s16 half18, int word8);
extern void FUN_08904570(void *manager, GlobalSubmitRecord *record,
                          int descriptor_word, u8 descriptor_byte,
                          int request_word, s16 x, s16 y,
                          int descriptor_word2, u8 descriptor_stack_byte);
