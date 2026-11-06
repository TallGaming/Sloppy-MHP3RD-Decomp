/*
 * Purpose: retain the recovered ABI and input-record layout for
 * FUN_0883c970 while its three control-flow cases are still unrecovered.
 * This is an uncompiled field view, not a whole-function candidate.
 *
 * Callers pass a context pointer, a pointer to a packed record, a 0x100
 * limit, and zero. The function returns an unsigned byte status.
 */
typedef unsigned char u8;
typedef unsigned short u16;

typedef struct {
    u8 type;
    u8 field_01;
    u16 field_02;
} PackedInputRecord;

typedef struct {
    void *field_345c;
} TargetContextView;

/*
 * The first observed zero-mode path forwards all four integer lanes unchanged
 * to FUN_0883c6d0 and returns its low-byte result. The other dependencies
 * have no verified prototypes yet.
 */
extern int FUN_0883c6d0(void);
extern int FUN_0885fba8(void);
extern int FUN_0885fb04(void);

u8 FUN_0883c970(TargetContextView *context, const PackedInputRecord *record,
                int limit, int mode);
