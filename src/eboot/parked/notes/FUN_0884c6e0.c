/*
 * FUN_0884c6e0 partial interface recovery.
 *
 * A confirmed parked caller passes a service pointer, a resolved record, and
 * one byte of mode. The target has two direct paths to FUN_08867d40 and a
 * terminal transfer to the unresolved FUN_0884c5c0. Field offsets and the
 * exact mode predicate are not yet independently established, so this is an
 * uncompiled field/ABI view and not a whole-function candidate.
 */
typedef unsigned char u8;
typedef unsigned short u16;

void FUN_08867d40(void *service, u16 value);
void FUN_0884c5c0(void *service, void *record, u8 mode);

/* Proposed target ABI: void FUN_0884c6e0(void *service, void *record, u8 mode). */
