/*
 * Purpose: retain the verified direct-call surface of FUN_08848270 while its
 * owner type, input lanes, and branch predicates remain unresolved.
 *
 * This is an uncompiled field/ABI view. It is not a callable replacement.
 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;

/* The selector reader delegates to the pointer-returning resolver. */
extern u8 FUN_0885dca8(void);
extern s32 FUN_0885ca20(u32 unused, u32 index);
extern void FUN_08867d40(void *record, u16 value);
extern void FUN_08867d54(void *record, u16 value);
extern void FUN_0890112c(void *owner, u32 word0, u32 word4, u32 wordc,
                         short half10, short half12, u32 word8);
extern void FUN_0890172c(void **object, u8 a, signed char b, s32 c,
                         short d, short e, signed char f);

struct FUN_08848270_ObservedSurface {
    /* Ownership and layout are not established. */
    void *owner;
    void *record;
    u16 value;
};

/* PSP EABI caller analysis retains lane eight from FUN_0884e26c input. */

/*
 * The target has 28 direct calls, including selector/table dispatch and
 * descriptor submission paths. Its 15 observed conditional branches prevent
 * a truthful whole-body reconstruction until the sole caller's lane setup and
 * unresolved callee contracts are recovered.
 */
