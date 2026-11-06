/*
 * Purpose: retain the supported recovery boundary for FUN_088315b0.
 *
 * This is an uncompiled partial field view, not a whole-function candidate.
 * The entry has two pointer-like GPR inputs and an 80-byte frame.  It saves
 * two callee-saved registers, transfers a five-word aggregate using five
 * unaligned load pairs, and calls two functions without verified prototypes.
 * The target has no direct reference callers, so its callback/table owner,
 * complete entry ABI, and result type are not proved.
 */

typedef struct FUN_088315b0_UnknownInput FUN_088315b0_UnknownInput;

/* Both dependencies require a real caller or interface proof before use. */
extern void FUN_08831d98(void);
extern void FUN_0883942c(void);

/*
 * The 20-byte transfer is structural evidence only.  It does not establish
 * object ownership, field names, or a safe prototype for this entry point.
 */
typedef struct {
    unsigned char bytes[20];
} FUN_088315b0_Aggregate;

void FUN_088315b0(FUN_088315b0_UnknownInput *first,
                  FUN_088315b0_UnknownInput *second);
