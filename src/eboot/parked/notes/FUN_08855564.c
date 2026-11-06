/*
 * FUN_08855564: typed interface view for a shared-context event/update entry.
 *
 * Caller evidence establishes a context pointer in the first argument.  The
 * second argument is supplied once as a small slot-derived value and elsewhere
 * as two item-relative addresses, so its pointed-to type and operation cannot
 * yet be stated honestly.  This is intentionally an uncompiled ABI view, not
 * a behaviorless replacement body.
 */

typedef unsigned int uintptr_t;

void FUN_08855564(void *context, uintptr_t event_or_item_part);
