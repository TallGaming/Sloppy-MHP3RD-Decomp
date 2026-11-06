/*
 * Purpose: record the directly observed scalar normalization portion of
 * FUN_0885a4cc. This is a partial field view, not a whole C candidate.
 * The three diagnostic groups need their data-address bindings and full
 * predicates before a natural candidate can be compiled.
 */
typedef unsigned char u8;
typedef unsigned short u16;

struct Record0885a4cc {
    u16 flags;
    u8 unknown_02;
    u8 first_level;
    u8 unknown_04;
    u8 second_level;
};

static void observed_normalize_fields(struct Record0885a4cc *record)
{
    if ((record->flags & 1u) == 0u) {
        record->flags |= 1u;
        record->first_level = 127;
    } else if ((signed char)record->first_level < 0) {
        record->first_level = 127;
    }

    if ((record->flags & 0x8000u) != 0u &&
        (signed char)record->second_level < 0) {
        record->second_level = 127;
    }
}
