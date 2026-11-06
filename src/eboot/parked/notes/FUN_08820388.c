/*
 * Purpose: retain the evidence-bounded ABI and dependency view of
 * FUN_08820388.
 *
 * Its only discovered caller is the unclassified 0x08820afc routine.  The
 * target directly calls four independently classified GCC unwind-FDE helpers:
 * get_cie_encoding, base_from_object, read_encoded_value_with_base, and
 * size_of_encoded_value.  Entry slots 1--3 flow to the first helper while a
 * loaded target-derived value supplies slot 0; later calls consume helper
 * results and derived values.  This establishes a real FDE-decoding dataflow
 * boundary, not complete structure or return contracts.
 *
 * The 356-byte public classify_object_over_fdes lead differs from this
 * 352-byte target and must not be treated as a same-function identity.  Even
 * the helper calls alone do not prove the target's full library provenance.
 *
 * UNCOMPILED PARTIAL: object, FDE, encoding, base, and decoded-value field
 * layouts remain unbound, as does the caller's target-specific contract.
 */

typedef unsigned int mhp3rd_word;

struct Mhp3rdUnwindObject;
struct Mhp3rdFde;

/*
 * The public contextual role and the caller's later use of the return slot
 * support this two-input/count-return field view.  It remains deliberately
 * uncompiled because the opaque layouts and target identity are unproved.
 */
static mhp3rd_word FUN_08820388_fde_decode_view(
    struct Mhp3rdUnwindObject *object,
    const struct Mhp3rdFde *first_fde);
