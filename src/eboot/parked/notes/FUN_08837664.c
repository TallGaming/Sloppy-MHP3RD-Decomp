/*
 * Purpose hypothesis: prepare and submit a packet from the shared cursor.
 *
 * This is an uncompiled field/ABI view rather than a whole-function
 * candidate.  A synthetic zero-state path reaches the sequence below once:
 * obtain shared cursor, clear a derived buffer, select/copy a six-byte record,
 * prepare packet data, write a 16-bit header field, finalize the cursor
 * header, and submit.  The target returns zero for artificial zero and
 * positive, and negative submit results.  A one-byte artificial read variation instead
 * reaches FUN_08837480 and skips the fixed 16-bit header writer, establishing
 * a one-byte nonzero predicate (under tested artificial values) choosing
 * between those two packet paths.
 * The optional call passes three derived nonzero GPR lanes, agreeing with the
 * separate target-flow observation but still not proving their C types.
 *
 * The packet pointer source, clear extent, record-selection predicate, packet
 * size/header value, and original callable ABI remain unresolved.  Several
 * dependencies are PARKED, so this file deliberately does not manufacture a
 * compiling whole-body from incomplete contracts.
 */
typedef unsigned int u32;
typedef struct PacketCursor PacketCursor;

PacketCursor *FUN_0882fc38(void);
void FUN_088ebb10(void *destination, int value, u32 size);
void FUN_088301bc(unsigned char select_external, const void *record);
void FUN_0882fc5c(PacketCursor *cursor, const void *source, u32 size);
void FUN_08837480(void);
void FUN_0882fea4(unsigned char *packet, unsigned short value);
void FUN_0882febc(unsigned char *packet);
int FUN_0883012c(const void *packet);

/*
 * Incomplete recovery notes:
 *   cursor = FUN_0882fc38();
 *   clear(derived_buffer, 0, derived_extent);
 *   FUN_088301bc(derived_selector, derived_record);
 *   FUN_0882fc5c(cursor, derived_source, derived_size);
 *   FUN_0882fea4((unsigned char *)cursor, derived_header_value);
 *   FUN_0882febc((unsigned char *)cursor);
 *   (void)FUN_0883012c(cursor);
 */
