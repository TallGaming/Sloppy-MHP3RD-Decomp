/* Purpose: retain the verified packet-submit wrapper shape without inventing
 * the shared record, output packet, or helper ABI.  Synthetic runs establish
 * two pointer input lanes, a seven-helper sequence, first-lane return, and a
 * 20-byte output-lane copy only when the final submit returns zero.  The one
 * confirmed caller does not yet provide type-recovered pointer provenance.
 * This declaration is an evidence aid, not a complete C candidate. */
void FUN_08837570_partial_view(void *output_lane, const void *context);
