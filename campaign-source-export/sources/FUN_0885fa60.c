/*
 * Purpose: find the matching 36-byte record and return its field view.
 * The record list ends at the first category byte equal to 255.
 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef struct {
    u8 category;
    u8 reserved;
    u16 key;
    u8 unknown[20];
    u16 values[6];
} AudioRecord;

extern const AudioRecord *FUN_0885f6a8(void *context, u8 category, u16 index);

const u16 *FUN_0885fa60(void *context, u8 category, u16 key)
{
    const AudioRecord *record = FUN_0885f6a8(context, category, 0);

    while (record->category != 255) {
        if (record->category == category && record->key == key)
            return record->values;
        ++record;
    }
    return 0;
}
