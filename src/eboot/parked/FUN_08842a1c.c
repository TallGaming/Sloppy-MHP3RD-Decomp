/*
 * Purpose: retain the evidence-backed partial ABI view for FUN_08842a1c.
 *
 * The only declared caller is FUN_0884fdf0.  Synthetic runs corroborate a
 * three-call sequence: a library formatter, the registered slot-zero
 * resource wrapper, then a library formatter.  The final formatter receives
 * the third incoming integer lane as its destination and the wrapper result
 * as a formatted argument.  The first formatter receives a global-backed
 * destination and a value derived from the second incoming lane.
 *
 * This is intentionally not a compilable whole-function candidate.  The
 * caller has no recovered parameter contract, and the global-backed first
 * formatter buffer, its size/format arguments, and the resource-wrapper key
 * are not independently typed.  Declaring guessed arrays or variadic calls
 * would fabricate the ABI rather than recover it.
 */

typedef unsigned int u32;

struct FUN_08842a1c_partial_abi {
    void *unknown_lane0;
    u32 lane1_used_by_first_formatter;
    char *final_destination_lane2;
};

/* Recovered flow, not executable C:
 * library_format(global_backed_destination, unknown_size, unknown_format,
 *                abi->lane1_used_by_first_formatter + 1);
 * resource = FUN_08867d40(unknown_manager, unknown_key);
 * library_format(abi->final_destination_lane2, unknown_format, resource);
 */
