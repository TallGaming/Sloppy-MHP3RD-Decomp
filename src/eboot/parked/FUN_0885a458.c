/*
 * Purpose: retain the current, evidence-limited C view of FUN_0885a458.
 *
 * Local target flow builds a 32-byte stack packet, submits selector one, and
 * returns the callee result.  Artificial runs show that the entry lanes do
 * not affect the observed call.  The packet has a fixed control word and a
 * word sourced through D_08965d90; the remaining field ownership is not
 * established.  This is an uncompiled partial view, not a C candidate.
 */

typedef unsigned int u32;

struct Fun0885a458PacketPartial {
    u32 control;
    u32 shared_word;
    u32 unresolved_words[6];
};
