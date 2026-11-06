/*
 * Purpose: walk caller-owned 124-byte records, test a key record, and forward
 * the adjacent selected record to the parked item handler.
 *
 * This is an uncompiled field view. No direct caller or aligned callback-table
 * reference identifies the callable ABI. The loop stride, end condition, and
 * FUN_0883c5b0 effects are unresolved, so it is not a whole candidate.
 */
typedef unsigned char u8;
typedef signed char s8;

struct Owner088423b4 {
    u8 unknown_000[0x254];
    u8 records[30][124];
};

extern int FUN_0883c4f8(const u8 *text);
extern s8 FUN_0884238c(const u8 *item);
extern void FUN_0883c5b0(void *item);

void FUN_088423b4_abi_view(struct Owner088423b4 *owner)
{
    u8 *record;
    u8 *selected_record;
    int index;

    for (index = 0; index < 30; index++) {
        record = owner->records[index];
        selected_record = record + 124;
        if (FUN_0883c4f8(record)) {
            s8 value = FUN_0884238c(selected_record);

            /* Synthetic records support a 30-element, 124-byte-stride walk.
             * Both tested selector branches reach distinct handler call sites;
             * their precise source-level condition remains unbound. */
            (void)value;
            FUN_0883c5b0(selected_record);
        }
    }
}
