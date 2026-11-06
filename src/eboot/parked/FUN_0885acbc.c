/*
 * FUN_0885acbc builds a 28-byte audio command from the pointed seed record,
 * selectively replaces four packed positions whose incoming scalar is not
 * -1, and submits the resulting local command through FUN_0885acac.
 *
 * This is an intentionally uncompiled field view.  The target's four
 * conditional stores overlap at offsets +4/+6/+7, while the actual command
 * object owner and its member declarations are not yet recovered.  A normal
 * non-overlapping C struct would invent a layout and is not suitable for a
 * whole candidate.
 */

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

typedef struct AudioCommandFieldView {
    u32 word_00;              /* set to all one bits */
    u8 packed_04_to_07[4];    /* full, half, and byte writes overlap here */
    u32 word_08;
    u32 word_0c;
    u8 packed_10_to_13[4];    /* halfword update at +0x12 */
    u32 word_14;
    u32 word_18;
} AudioCommandFieldView;

extern const AudioCommandFieldView *D_08965e9c;
extern void FUN_0885acac(AudioCommandFieldView *command);

/*
 * Provisional scalar lanes: all four compare equal to -1 before their
 * respective command-field update.  The true C parameter/member types and
 * source-level packed owner are unresolved.
 */
void FUN_0885acbc(u32 first, u32 second, u32 third, u32 fourth)
{
    AudioCommandFieldView command;

    command = *D_08965e9c;
    command.word_00 = (u32)-1;
    if (first != (u32)-1) {
        /* target writes four bytes at +4 */
    }
    if (second != (u32)-1) {
        /* target writes two bytes at +6 */
    }
    if (third != (u32)-1) {
        /* target writes one byte at +7 */
    }
    if (fourth != (u32)-1) {
        /* target writes two bytes at +0x12 */
    }
    FUN_0885acac(&command);
}
