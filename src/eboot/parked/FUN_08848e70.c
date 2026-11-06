/*
 * Purpose: retain the supported selector-reader relationship for
 * FUN_08848e70 while the aggregate context layout and the other call
 * interfaces are unresolved. This is an uncompiled partial field view.
 */
typedef unsigned char fun_08848e70_u8;
typedef unsigned short fun_08848e70_u16;

typedef struct FUN_08848e70_Context {
    fun_08848e70_u16 unresolved_selector_or_index;
} FUN_08848e70_Context;

/* FUN_0885dca8 is the verified selector-to-byte reader. */
extern fun_08848e70_u8 FUN_0885dca8(void *context, void *selector);

/* Six direct caller sites establish that this function receives a context. */
extern void FUN_08848e70(FUN_08848e70_Context *context, ...);
