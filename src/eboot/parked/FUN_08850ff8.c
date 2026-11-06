/*
 * FUN_08850ff8: build the fixed menu text/descriptor sequence for two values.
 *
 * PARKED field view.  The sole observed caller passes an owner, two words,
 * and a descriptor pointer.  Synthetic execution completes and shows two
 * initial batch submissions (counts 22 and 4), label resolution/dispatch for
 * fixed ids, then formatted text dispatches for the two input words.  The
 * local record layouts, format strings, coordinate initialization, and exact
 * ownership of the batch manager are not recovered yet.
 */

typedef signed short s16;
typedef unsigned short u16;
typedef unsigned int u32;

struct MenuRecord_08850ff8 {
    u32 unknown[9];
};

void *FUN_08867d40(void *record, u16 value);
void FUN_08900bf0(void *manager, void *entry, void *descriptor, int count,
                  int fourth, s16 x, s16 y, int third);
void FUN_08904570(void *unused, struct MenuRecord_08850ff8 *record,
                  int descriptor_word, unsigned char descriptor_byte,
                  int request_word, s16 x, s16 y, int descriptor_word2,
                  unsigned char stack_byte);

void FUN_08850ff8_field_view(void *owner, u32 first_value, u32 second_value,
                              void *descriptor)
{
    struct MenuRecord_08850ff8 records[9];
    void *label;

    /* Entry addresses and the rest of the descriptor fields are unresolved. */
    FUN_08900bf0(0, &records[0], descriptor, 22, 0, 0, 0, 0);
    FUN_08900bf0(0, &records[1], descriptor, 4, 0, 0, 0, 0);

    label = FUN_08867d40(0, 151);
    FUN_08904570(0, &records[0], (int)label, 11, (int)descriptor, 0, 0, 0, 1);

    /* Ids 152 through 155, then 37/40 pairs, use 36-byte-spaced records.
     * The same descriptor input is forwarded as every dispatch request. */
    (void)owner;
    (void)first_value;
    (void)second_value;
}
