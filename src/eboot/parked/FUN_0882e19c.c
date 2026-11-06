/*
 * Purpose: retain ABI and ownership evidence for the packed-payload helper
 * FUN_0882e19c while its eight helper calls remain unnamed.
 *
 * The sole recovered direct caller, FUN_0882de24, supplies a scalar value
 * (0x8000 at this call site) followed by its third and fourth parameters.
 * The target subsequently reaches the packet-building helper family: a
 * reserve/copy helper and a big-endian halfword writer are independently
 * matched public C.  A source object forwarded as the third target argument
 * is read at byte offset 0x300.  The destination-writer contract and the
 * remaining helper contracts are not recovered, so this remains an ABI
 * witness rather than an implementation candidate.
 */
typedef unsigned char u8;
typedef unsigned int u32;

typedef struct PackedPayloadSourceHypothesis {
    u8 opaque_before_0300[0x300];
    u32 member_at_0300;
} PackedPayloadSourceHypothesis;

/* Hypothesis: flags is a scalar selector, writer owns emitted packet bytes. */
void FUN_0882e19c(u32 flags, void *writer, PackedPayloadSourceHypothesis *source);
