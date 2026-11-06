/*
 * Purpose hypothesis: call the adjacent helper and return.
 *
 * Parked after three plain C attempts: a typed void declaration, an ignored
 * int result, and an unprototyped declaration. GCC 4.0.4 group B makes each
 * form a sibling tail call. The reference keeps a normal call and frame.
 * Revisit after the project decides the group-B tail-call rule.
 */
extern void FUN_0882d700();

void FUN_0882d710(void)
{
    FUN_0882d700();
}
