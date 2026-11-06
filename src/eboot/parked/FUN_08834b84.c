/*
 * Purpose: preserve the recovered preparation/dispatch section of the
 * 0x08834b84 event helper without asserting an unproved target ABI.
 *
 * The target has a 160-byte frame and two exits.  Its first section obtains
 * the shared +0x24 block through FUN_0882fc48, zeroes an eight-byte local
 * header through the typed byte-fill thunk, appends two global words, then
 * appends a reversed four-byte lane, a one-byte lane, and five more global
 * words.  That complete local staging object is passed twice to FUN_08832d18
 * along distinct downstream paths.  The target also reaches the known
 * no-argument state helper FUN_088394dc, but its surrounding contracts remain
 * unresolved.  A single literal function-pointer reference maps to unlabelled
 * D_0896e14c; it supports table/callback ownership but does not establish an
 * incoming callable ABI.  This is an uncompiled field/control-flow view, not
 * a candidate.  Two labelled table siblings independently corroborate the
 * eight-byte zero/fill pair and the one-byte copy helper, but do not establish
 * a common callback parameter contract.
 */

typedef unsigned char u8;
typedef unsigned int u32;

struct FUN_08834b84_StagedHeader {
    u8 initial_words[8];
    u8 reversed_lane[4];
    u8 single_lane;
    u8 trailing_words[20];
};

/*
 * The first six calls establish this staging sequence, but their returned
 * values and branch-sensitive local offsets must be retained in the metadata
 * rather than expressed as executable C.  In particular, the two calls to
 * FUN_08832d18 and the dispatch after FUN_088394dc cannot safely be given a
 * function signature from this target alone.
 */
static struct FUN_08834b84_StagedHeader FUN_08834b84_partial_staging_view;
