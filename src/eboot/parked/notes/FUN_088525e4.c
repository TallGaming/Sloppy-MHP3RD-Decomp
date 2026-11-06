/* Purpose: retain an ABI-safe partial view while callback-table ownership is unresolved. */
#include <stdint.h>

typedef struct FUN_088525e4_context FUN_088525e4_context;

/* The target is reached through an unresolved callback lead. Its full callable
 * signature, context ownership, and memory effects require a concrete
 * registration-site trace before a whole natural-C candidate is justified. */
typedef void (*FUN_088525e4_callback)(FUN_088525e4_context *context);
