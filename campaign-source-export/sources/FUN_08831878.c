/*
 * Purpose: partial dataflow view of a framed packet-preparation and dispatch
 * routine.
 *
 * Evidence retained here is target-specific: the 276-byte entry has one
 * direct caller, an eight-call sequence, and a single conditional path.  The
 * sequence obtains the shared halfword address, invokes the verified
 * destination-returning byte-fill thunk, takes a mode-selecting snapshot,
 * prepares packet data, emits two size-driven packet fields, converts one
 * 16-bit field to big-endian, and forwards a packet-wrapper input.
 *
 * This is deliberately an uncompiled field/ABI view.  The entry's formal
 * input/output ABI, the branch predicate, packet-object ownership, and the
 * argument bindings for the parked dependencies remain unresolved.  It must
 * not be turned into a candidate by inventing a packed layout or callback.
 */
typedef unsigned char u8;
typedef unsigned int u32;
typedef unsigned short u16;

typedef struct PacketCursor PacketCursor;
typedef struct PacketRecord PacketRecord;
typedef struct PacketWrapperInput PacketWrapperInput;

/* Registered interfaces used by the observed direct flow. */
void *FUN_0882fc38(void);
void *FUN_088ebb10(void *destination, int value, u32 size);
int FUN_088302c4(PacketCursor *cursor, const u8 *record);
int FUN_08830318(PacketCursor *cursor, const u8 *record);
void FUN_0882febc(u8 *packet);

/* Existing partial evidence for the unresolved direct dependencies. */
void FUN_088301bc(u8 mode);
void FUN_0882fc5c(void);
int FUN_0883012c(const PacketWrapperInput *input);

/*
 * Observed dependency order:
 *   shared-halfword address -> byte-fill -> snapshot -> packet preparation
 *   -> 0x1a-sized record emission -> 0x11c-sized record emission
 *   -> big-endian 16-bit packet field -> packet wrapper.
 */
