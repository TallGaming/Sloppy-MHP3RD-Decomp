/*
 * FUN_088321e4: unresolved state-record dispatch wrapper.
 *
 * The target obtains the real pointer-valued global D_09bf5250, forwards its
 * first four incoming EABI GPR lanes plus that state pointer as lane five to
 * FUN_0883932c, then ends in a tail jump to FUN_088399f0.  It conditionally
 * reads a 32-bit state field at +0x35a.  This is a field/ABI view, not a
 * whole-function candidate: neither the entry signature nor either callee's
 * interface and return contract is known.
 */

typedef unsigned char u8;
typedef unsigned int u32;

extern u8 *D_09bf5250; /* Pointer binding is defined in source/eboot/symbols.s. */

/* FUN_0883932c receives the forwarded first four lanes and D_09bf5250 in
 * independent EABI lane a4; its typed prototype is not established. */
extern void FUN_0883932c(void);
extern void FUN_088399f0(void);

/* The only independently established target field access is a u32 read at
 * D_09bf5250 + 0x35a.  No function body is retained until the owner and the
 * dependency's ABI prove the branch and return semantics. */
