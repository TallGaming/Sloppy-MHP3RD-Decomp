/*
 * Purpose: retain the verified external entry ABI for FUN_0884cb18.
 *
 * A registered caller supplies the shared page manager, a sign-extended
 * state byte, and a resolved context value.  The body makes fourteen direct
 * calls, but most dependency contracts are still PARKED.  This is an
 * intentionally uncompiled field view, not a whole-function candidate.
 */
typedef unsigned char u8;

typedef struct PageManager PageManager;

void FUN_0884cb18(PageManager *manager, signed int selected_slot,
                  signed int context);
