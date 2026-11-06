/*
 * Purpose: validate a multiplayer-session selection against the manager's
 * current entry and its four signed half-word bounds.
 *
 * UNCOMPILED FIELD/ABI LEDGER ONLY.  This is not a candidate implementation,
 * must not be compiled or registered, and deliberately contains no invented
 * control flow.  The sole direct caller is FUN_08860f8c, the multiplayer
 * session-start handshake.  At its call site it supplies a manager object,
 * selector 0x5a, zero, and byte 10 of its selection record.  The target's
 * true parameter meanings and result contract still require recovery.
 *
 * Ownership is game code: the target is surrounded by session-manager helpers
 * and calls the game helper FUN_088dd118 once.  It is not library code.
 */
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;

/* Observed target field ledger, preserving only width and address relation.
 *
 * manager + 0x0ba0: pointer to the entry context passed to FUN_088dd118
 * entry   + 0x0094: four signed-half-word reads in selector range tests
 * entry   + 0x009c: one unsigned-byte read
 * manager + 0x0c8f: one signed-byte read compared with the selection value
 *
 * FUN_088dd118 reads its context +0xe0 as a pointer to 48-byte records and
 * returns the last nonnegative first word.  Its target-side return is used in
 * a branch condition, but no return-value semantic is assumed here.
 */
struct EntryContext_0882a6d8 {
    u8 unknown_000[0x94];
    s16 bounds_094[4];
    u8 marker_09c;
};

struct Manager_0882a6d8 {
    u8 unknown_000[0x0ba0];
    struct EntryContext_0882a6d8 *entry_0ba0;
    u8 unknown_0ba4[0x0c8f - 0x0ba4];
    s8 selection_marker_0c8f;
};

/* Direct caller evidence establishes four argument registers but does not yet
 * establish their C types or return type.  Keep only this declaration until
 * the branch predicates are recovered from the local target disassembly. */
extern s32 FUN_0882a6d8(struct Manager_0882a6d8 *manager,
                         s32 selector, s32 zero_argument, s32 selection_value);
