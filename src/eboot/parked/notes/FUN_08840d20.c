/*
 * FUN_08840d20: partial field view retained for ABI recovery.
 *
 * The target invokes a table-entry resolver and descriptor dispatcher, but
 * their concrete owner contracts are incomplete.  This is deliberately not a
 * whole candidate and must not be compiled as one.
 */
typedef unsigned short u16;

extern int FUN_08867d40(void *manager, u16 index);
extern void FUN_08904570(void *unused_manager, u16 *record, int descriptor_word,
                         unsigned char descriptor_byte, int request_word,
                         short x, short y, int descriptor_word2,
                         unsigned char stack_byte);

/* No target body is stated: exact argument forwarding is still unproved. */
