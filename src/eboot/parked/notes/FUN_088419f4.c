/*
 * FUN_088419f4: partial dependency view, not a whole candidate.
 *
 * Direct-call census finds no incoming function.  The target invokes a
 * descriptor dispatcher and two unresolved interfaces, so its callable entry
 * contract and owning static records require independent recovery first.
 */
typedef unsigned short u16;

extern int FUN_08867d40(void *manager, u16 index);
extern void FUN_08904570(void *unused_manager, u16 *record, int descriptor_word,
                         unsigned char descriptor_byte, int request_word,
                         short x, short y, int descriptor_word2,
                         unsigned char stack_byte);

/* No target body is stated: the actual forwarding lanes are incomplete. */
