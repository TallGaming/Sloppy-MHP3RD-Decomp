/*
 * Purpose: retain the verified external call surface for FUN_08849178 while
 * owner-object layout, incoming lanes, and its branch predicates are unknown.
 *
 * This is an uncompiled partial ABI view, not a callable implementation.
 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;

extern void FUN_08848e70(void);
extern void FUN_08867d40(void *record, u16 value);
extern void FUN_08900bf0(void);
extern void FUN_08904570(void);
extern void FUN_089048a8(void);

struct FUN_08849178_ObservedSurface {
    void *owner;  /* Ownership is unresolved. */
    void *record; /* Used by descriptor-facing dependencies. */
    u16 value;
};

/*
 * The target calls FUN_08848e70 twice, FUN_08867d40 seven times, and the
 * descriptor paths FUN_08904570/FUN_089048a8 seven/two times respectively.
 * Its sole caller constructs seven integer lanes locally and supplies the
 * remaining lane from memory. Unresolved call ABIs and that untyped memory
 * lane rule out a complete natural Group B candidate.
 */
