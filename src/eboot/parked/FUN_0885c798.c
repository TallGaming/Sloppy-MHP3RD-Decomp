typedef unsigned char u8;

/*
 * Purpose hypothesis: forward an object and its second byte to a helper.
 *
 * Parked after typed void, ignored int, and unprototyped helper declarations.
 * GCC 4.0.4 group B makes every form a sibling tail call. The reference keeps
 * a normal call and frame. Revisit after the group-B tail-call rule changes.
 */
extern void FUN_0885bbfc();

void FUN_0885c798(void *object, const u8 *state)
{
    FUN_0885bbfc(object, state[1]);
}
