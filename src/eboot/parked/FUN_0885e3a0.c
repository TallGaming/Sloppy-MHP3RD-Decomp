/*
 * Purpose: partial typed field view for FUN_0885e3a0.
 *
 * This is intentionally not a whole-function candidate.  It records the
 * selector-shaped value which the target copies to a local area before its
 * repeated category dispatches.  The signedness and the +1/+2 layout are
 * supported by the target's byte/halfword accesses and by the two verified
 * four-lane selector helper interfaces below.  The source of the copied
 * value, the outer function's signature, and the remaining branch actions
 * need caller evidence before this can become a callable reconstruction.
 */

typedef unsigned char u8;
typedef unsigned short u16;

typedef struct SelectorKey {
    u8 reserved_00;
    u8 category;       /* +1: repeatedly compared with 9, 11, and 15 */
    u16 index;         /* +2: selector record index */
    u8 qualifier_kind; /* +4: separately tested before a late dispatch */
} SelectorKey;

typedef struct SelectorRuntimeState {
    u8 unknown_0000[1140];
    unsigned int dispatch_flags; /* +1140: target tests bits 0x4 and 0x8 */
} SelectorRuntimeState;

/*
 * D_08b0ce80 is writable loader-zero-fill storage.  Its enclosing object is
 * not yet identified; this declaration records only the target-relative flag
 * field and is not a proposed global binding.
 */
static int selector_dispatch_is_enabled(const SelectorRuntimeState *state)
{
    return (state->dispatch_flags & (4u | 8u)) == 0;
}

/* Verified four-integer-lane interfaces; both implementations remain PARKED. */
extern int FUN_0885cf58(void *context, u16 category, u16 index, u16 qualifier);
extern int FUN_0885d024(void *context, u16 category, u16 index, u16 request);

/*
 * Branch-field model only: categories 9, 11 and 15 select the optional-value
 * helper's wide-record path (record +18/+19); its other supported categories
 * use the narrow +14/+15 path.  FUN_0885d024 is a distinct narrow-category
 * family using +16/+17.  The enclosing function makes distinct direct calls
 * to both helpers but has additional branches and calls, so this is evidence,
 * not its body.
 */
static int selector_optional_field(void *context, const SelectorKey *key,
                                   u16 qualifier)
{
    if (key->category == 9 || key->category == 11 || key->category == 15)
        return FUN_0885cf58(context, key->category, key->index, qualifier);
    return 0;
}

static int selector_matched_field(void *context, const SelectorKey *key,
                                  u16 request)
{
    return FUN_0885d024(context, key->category, key->index, request);
}
