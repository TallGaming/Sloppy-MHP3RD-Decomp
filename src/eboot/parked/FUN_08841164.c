/* Purpose: retain verified target dependencies for the parked 1272-byte coordinator. */
typedef unsigned char u8;
typedef unsigned short u16;

/* These loader-zero-fill addresses are each read as four-byte scalar values. */
extern void *D_08aace80;
extern void *D_09bb7a80;
extern void *D_09beb0bc;

/*
 * This uncompiled field view is not a whole-function candidate.
 * Direct-call context gives one pending caller with two sites. The target has
 * no indirect calls and directly invokes the listed dependency entries: one
 * public-library interval, FUN_08867d40 twice, FUN_088aa5f4 six times, and
 * three further parked helpers. Their combined ABI and the target result use
 * are not proved. Artificial scalar execution reaches an unsupported family
 * before its first call, so it cannot establish parameter ownership.
 */
struct StatePointers_08841164 {
    void *primary_record; /* D_08aace80: established as a long-lived record pointer. */
    void *owner_table;    /* D_09bb7a80: used as FUN_088b51b8's owner lane nearby. */
    void *manager;        /* D_09beb0bc: manager lane at nearby descriptor submissions. */
};

/* Neighbouring verified/parked call sites support this relationship only:
 * FUN_08867d40 consumes the primary-record lane; FUN_088b51b8 consumes the
 * owner-table lane; descriptor work consumes the manager lane. The target's
 * individual argument selection and ordering still require caller decoding.
 * A fresh local decode confirms 13 calls in this target (the same six
 * dependency families), while the immediate caller has two target calls and
 * itself has an unresolved upstream caller. This confirms a coordinator
 * relationship, but does not establish a callable target signature.
 */
