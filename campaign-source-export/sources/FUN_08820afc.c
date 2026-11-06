/*
 * Purpose: retain the evidence-bounded search-object view for
 * FUN_08820afc without claiming a matching or complete source recovery.
 *
 * The target's sole direct caller, FUN_08821258, and its direct-call graph
 * place it in the unwind-FDE search path.  It reaches the known libgcc FDE
 * helpers add_fdes, frame_heapsort, linear_search_fdes,
 * read_encoded_value_with_base, base_from_object, and get_cie_encoding.
 * That is consistent with the public GCC 4.0.4 search_object role: inspect
 * one object and one program counter, initialize/sort FDE state as needed,
 * then return an FDE or a null result.
 *
 * UNCOMPILED PARTIAL: no target-specific struct layout, input ABI, return
 * representation, indirect-call contract, or public-source identity is
 * sufficiently proved.  The unchanged public GCC body is 1888 bytes while
 * this target is 1884 bytes and differs throughout the overlap, so this is
 * not a candidate body or a library classification.
 */

struct Mhp3rdUnwindObject;
struct Mhp3rdFde;

static const struct Mhp3rdFde *FUN_08820afc_search_object_view(
    struct Mhp3rdUnwindObject *object,
    void *program_counter);
