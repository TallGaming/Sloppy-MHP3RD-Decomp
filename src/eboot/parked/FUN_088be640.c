typedef unsigned char u8;

/*
 * Purpose hypothesis: pass the field at offset 4120 to a helper.
 *
 * Parked after typed void, ignored int, and unprototyped helper declarations.
 * GCC 4.0.4 group B emits a sibling tail call; the reference keeps a normal
 * call and frame. Revisit after the group-B tail-call decision.
 */
extern void FUN_08919370();

void FUN_088be640(const void *object)
{
    FUN_08919370(*(void **)((const u8 *)object + 4120));
}
