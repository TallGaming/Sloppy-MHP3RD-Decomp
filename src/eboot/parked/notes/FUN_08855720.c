/*
 * FUN_08855720: typed interface view for a context-local table/event update.
 *
 * A parked caller supplies a shared context and a record byte.  The target
 * calls the verified 16-bit table accessor and then calls FUN_08855564, whose
 * ABI is still parked.  The actual target-local fields and the relationship
 * between the table result and the two notification calls are unresolved, so
 * this is intentionally an uncompiled ABI view rather than a replacement
 * body.
 */

typedef unsigned char u8;

void FUN_08855720(void *context, u8 table_or_event_number);
