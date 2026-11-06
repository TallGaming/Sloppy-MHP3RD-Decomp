/*
 * Purpose: retained ABI and field view for FUN_08837844.
 *
 * Synthetic scalar probes establish input lane 0 as a 0x14c-byte source,
 * D_09bf5250 as a state pointer, and a 0x14c-byte destination at +0x1380.
 * The target also calls FUN_08830550 on that destination. Its branch meaning
 * and observable return are unresolved, so this is intentionally uncompiled.
 */
typedef unsigned int u32;

typedef struct Record_14c {
    u32 word[83];
} Record_14c;

typedef struct State_08837844 {
    unsigned char before_saved_record[0x1380];
    Record_14c saved_record;
} State_08837844;

extern State_08837844 *D_09bf5250;
extern int FUN_08830550(const signed char *values);

/* Partial dataflow only; not a whole candidate. */
void FUN_08837844_partial(const Record_14c *source)
{
    int destination_has_data = FUN_08830550((const signed char *)&D_09bf5250->saved_record);

    D_09bf5250->saved_record = *source;
    (void)destination_has_data;
}
