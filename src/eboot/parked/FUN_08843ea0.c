/*
 * Purpose: retain the verified data-flow and ABI field view for FUN_08843ea0.
 * This is an uncompiled partial recovery, not a whole-function candidate.
 */

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

typedef struct {
    u8 bytes[24];
} Record24;

/* Registered callee: a byte value is stored in the destination object. */
extern void FUN_0883ccd0(void *object, u8 value);

/* These two interfaces are only call-site ABI views. Their semantics remain open. */
extern int FUN_088434a8(void *object, void *optional_input,
                        Record24 *record, int zero);
extern int FUN_08843c64(void *object, void *context, int one,
                        void *optional_input);

/*
 * Confirmed target layout facts:
 * - FUN_0883ccd0(object, 1) executes once.
 * - Argument 1 supplies a 12-byte packed copy from +0x478 to object
 *   +0x2aa6.
 * - The first local record array begins at object +0x24a6, has stride 24,
 *   and has an observed 64-element path.
 * - A second observed stride-24 output path begins at object +0x1ea6.
 * - object +0x2ab2 is a u16 control field.
 * - Synthetic paths show that a null third argument bypasses FUN_088434a8;
 *   a non-null path reaches it 64 times when its mocked result is nonzero.
 *   FUN_08843c64 is reached 100 times in the same paths.
 *
 * The branch conditions that choose the two incomplete callees, and their
 * state effects, are not independently proved.  Do not compile this as a
 * candidate until those interfaces are recovered.
 */
typedef struct {
    u8 prefix[0x1ea6];
    Record24 output_records[64];
    u8 between_output_and_input[0x24a6 - 0x1ea6 - 64 * sizeof(Record24)];
    Record24 input_records[64];
    u8 copied_context_bytes[12];
    u16 control;
} Fun08843ea0Layout;
