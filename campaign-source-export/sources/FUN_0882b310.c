/*
 * Purpose: preserve the recovered control flow for FUN_0882b310.
 *
 * The list header uses a signed state byte at +6, a count at +5, and a
 * pointer to 0x40-byte records at +0x18.  Selected records have a mask byte
 * at +0x2c, position floats at +0x20..+0x28, a limit at +0x3c, and a VFPU
 * input at +0x30.  The exact VFPU metric is not yet expressible in project
 * plain C, so this remains an intentionally uncompiled reconstruction.
 */
typedef signed char s8;
typedef unsigned char u8;
typedef unsigned int u32;

typedef struct {
    u8 unknown_0[5];
    u8 count;
    s8 state;
    u8 unknown_7[17];
    u8 *records;
} RecordList;

extern int FUN_0882b234(void *unused, float *vertices, float *point);
extern int FUN_088a74c0(u8 *object, u32 mode);

/* Recovered as an in-function COP2/VFPU transform, not a legal C call. */
extern float VFPU_RECORD_METRIC(const u8 *record, const float *origin);

int FUN_0882b310(u8 *object, RecordList *list, u32 selection_mask)
{
    u8 *record;
    u32 index;
    float metric;
    float *origin;

    if (list->state < 0 && FUN_088a74c0(*(u8 **)(object + 0xde4), 0) == 0)
        return 2;

    origin = (float *)(*(u8 **)(object + 0xde4) + 0x80);
    record = list->records;
    for (index = 0; index < list->count; index++, record += 0x40) {
        if ((record[0x2c] & (u8)selection_mask) == 0)
            continue;

        metric = VFPU_RECORD_METRIC(record, origin);
        if (metric < 0.0f || *(float *)(record + 0x3c) < metric)
            continue;
        if (FUN_0882b234(object, (float *)record, origin) == 0)
            return 2;
    }
    return 2;
}
