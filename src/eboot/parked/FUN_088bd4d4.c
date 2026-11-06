/*
 * Purpose hypothesis: pass the record payload to a helper.
 *
 * Parked after three plain C attempts: typed void, ignored int, and
 * unprototyped helper declarations all compile as a sibling tail call.
 * The reference instead adjusts the argument, makes a normal call, and
 * returns through a frame. Revisit after the group-B tail-call rule changes.
 */
extern void FUN_088f5808();

void FUN_088bd4d4(void *record)
{
    FUN_088f5808((char *)record + 6176);
}
