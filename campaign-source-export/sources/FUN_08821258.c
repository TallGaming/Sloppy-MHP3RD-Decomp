/*
 * Purpose: retain the evidence-bounded unwind lookup ABI view for
 * FUN_08821258 without treating adjacency to libgcc helpers as ownership.
 *
 * Both discovered callers use two 32-bit integer argument slots.  In
 * FUN_0881ca70, the word return is a success indicator and a four-word local
 * result view is consumed at word 2 only on success.  Target-side flow shows
 * three word stores through the second entry slot (including its preserved
 * alias), matching the three base-result positions used by the public role.
 * This target brackets
 * two FUN_08820afc searches with verified PSP interrupt suspend/resume imports
 * and, on the successful path, calls the independently identified FDE base,
 * decoding, and encoding helpers.
 *
 * That flow resembles GCC 4.0.4 _Unwind_Find_FDE, whose public body has a
 * program-counter input, a dwarf-eH-bases output record, and an FDE-pointer
 * return.  It is not an unchanged candidate: the target is 420 bytes versus
 * the public 368-byte function and includes target-specific PSP imports.
 *
 * UNCOMPILED PARTIAL: the output-record width/layout beyond those three words,
 * actual pointer types,
 * return representation, locking/interrupt contract, and provenance remain
 * unresolved.
 */

struct Mhp3rdFde;
struct Mhp3rdEhBases;

static const struct Mhp3rdFde *FUN_08821258_unwind_find_view(
    void *program_counter,
    struct Mhp3rdEhBases *bases);
