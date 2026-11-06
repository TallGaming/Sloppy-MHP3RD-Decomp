/*
 * Purpose: update two byte state flags after a global-state helper accepts a
 * caller-provided request.
 *
 * Partial ABI recovery: the request is observed in argument register zero and
 * is forwarded as the helper's second argument.  The helper's ownership and
 * formal request type are not recovered, so this source is documentation only,
 * not a matching candidate.
 */
typedef unsigned char u8;

typedef struct RuntimeState {
    u8 unknown_000[330];
    u8 accepted_flag;
    u8 pending_flag;
} RuntimeState;

extern RuntimeState D_08a293a4;
extern int FUN_088305b4(RuntimeState *state, const void *request);

int FUN_0882f77c(const void *request)
{
    if (FUN_088305b4(&D_08a293a4, request) == 0) {
        return 0;
    }

    D_08a293a4.accepted_flag = 1;
    D_08a293a4.pending_flag = 0;
    return 1;
}
