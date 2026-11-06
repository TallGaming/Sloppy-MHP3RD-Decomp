/*
 * Purpose: retain the bounded ABI and local-buffer view for FUN_0883894c.
 *
 * This is not a whole-function candidate.  The census records no direct
 * callers, while the target forwards all four entry integer slots to its first
 * direct dependency.  It then initializes and routes a 332-byte local region
 * through several dependencies.  The callback registration/indirect-entry
 * binding, four entry types, branch outcomes, and four dependency prototypes
 * remain unproved.  D_0896e130 is the middle entry of a five-entry local
 * function-pointer-only window, supporting indirect entry, but it does not
 * establish the containing table's owner or callback signature.  A parameter
 * struct or callback typedef would therefore be invented rather than recovered.
 */
typedef struct FUN_0883894c_callback_context FUN_0883894c_callback_context;

/* Hypothesis only: four PSP-EABI integer slots are live at the first call. */
typedef int (*FUN_0883894c_signature_hypothesis)(
    FUN_0883894c_callback_context *arg0,
    unsigned int arg1,
    unsigned int arg2,
    unsigned int arg3);
