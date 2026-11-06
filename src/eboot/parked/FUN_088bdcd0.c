typedef unsigned char u8;

/*
 * Purpose hypothesis: pass a subobject at offset 8072 to a helper.
 *
 * Parked after typed void, ignored int, and unprototyped helper declarations.
 * GCC 4.0.4 group B produces a sibling tail call; the reference keeps a normal
 * call and frame. Revisit after the group-B tail-call decision.
 */
extern void FUN_08945f0c();

void FUN_088bdcd0(void *object)
{
    FUN_08945f0c((u8 *)object + 8072);
}
