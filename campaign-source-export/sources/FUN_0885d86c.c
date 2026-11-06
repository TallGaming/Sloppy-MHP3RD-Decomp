/*
 * Purpose: retain the independently observed wrapper boundary for
 * FUN_0885d86c without inventing the unresolved record-byte predicate.
 *
 * Uncompiled field view.  Artificial scalar execution over every value of
 * the byte at D_08aace80 + 2504 + 12*index shows no external writes.  It
 * forwards its first lane unchanged and its second lane sign-extended from
 * 16 bits to the verified FUN_0885d808 ABI.  The interval also reads the
 * adjacent table byte; no caller or object-layout evidence establishes how
 * its predicate, remaining lanes, or 0/255 result contract should be named.
 */
typedef signed short s16;
typedef unsigned char u8;

extern u8 *D_08aace80;
extern int FUN_0885d808(void *unused, s16 index);

/* Signature documents the supported forwarded lanes only; not a candidate. */
extern int FUN_0885d86c(void *context, s16 index);
