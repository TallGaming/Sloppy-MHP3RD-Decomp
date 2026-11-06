/*
 * Purpose: retain the supported, incomplete packet-construction dataflow for
 * FUN_08836854 without pretending that its entry ABI or the packet object has
 * been recovered.
 *
 * This is an uncompiled field view, not a whole-function candidate.  The
 * target obtains a shared record through the verified pointer getter, then
 * drives a sequence of packet snapshot/setup/cursor/copy helpers.  Several
 * helpers remain PARKED and their callable contracts cannot safely be guessed.
 */

typedef unsigned short u16;

/* Independently registered: returns the address of the shared record. */
extern void *FUN_0882fc38(void);

/* These names are evidence anchors only; their interfaces are unresolved. */
extern void FUN_088301bc(void);
extern void FUN_0882fc5c(void);
extern void FUN_0882ffb4(void);
extern void FUN_0882febc(void);
extern void FUN_0883012c(void);

struct FUN_08836854_partial_packet_view {
    u16 unknown_header;
};

/* No implementation: the recovered evidence does not bind ENTRY or return ABI. */
