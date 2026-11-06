/*
 * Purpose: preserve the observed dependency surface for FUN_0884165c.
 *
 * This is an uncompiled field view. The only direct caller is unresolved.
 * Artificial execution reaches the two registered helper calls first, then
 * reaches a zero synthetic control target because the real dispatch owner is
 * not available in synthetic memory. The target also has unresolved direct
 * calls to a selector resolver and FUN_088ac55c.
 */
typedef unsigned char u8;
typedef unsigned int u32;

typedef struct FUN_0884165c_context FUN_0884165c_context;
typedef struct FUN_0884165c_selector FUN_0884165c_selector;

extern u8 FUN_0885bbfc(void *unused_context, u32 value);
extern u8 FUN_0885c878(void *unused_context, u8 index);
extern const u8 *FUN_0885be6c(void *unused_context,
                              const FUN_0884165c_selector *selector);
extern int FUN_088a52b0(const u8 *record, u8 value);

/* Pending callable ABI and owner. */
extern u32 FUN_088ac55c(void);

/* Input lanes, return contract, and dispatch object are unproved. */
u32 FUN_0884165c_view(FUN_0884165c_context *context);
