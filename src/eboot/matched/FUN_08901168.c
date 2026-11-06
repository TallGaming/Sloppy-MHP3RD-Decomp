/*
 * FUN_08901168: submit a request using packed fields from an input record.
 *
 * Parameter meanings and the record layout are hypotheses based on accesses.
 */
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned int u32;
typedef signed short s16;

struct Record08901168 {
    u8 unknown00[18];
    s8 value18;
    u8 unknown13;
    u8 packed14[4];
};

extern void FUN_088ff1f0(void *owner, const struct Record08901168 *record, u32 kind,
                         s16 value3, s16 value4, u32 packed,
                         s8 value6, u32 value7, u32 value8);

void FUN_08901168(void *owner, const struct Record08901168 *record, u32 kind,
                  int value3, int value4)
{
    const u8 *bytes;
    u32 packed;
    s16 narrowed3;
    s16 narrowed4;

    bytes = record->packed14;
    narrowed3 = (s16)value3;
    packed = ((u32)bytes[3] << 24) |
             ((u32)bytes[2] << 16) |
             ((u32)bytes[1] << 8) |
             bytes[0];
    narrowed4 = (s16)value4;
    FUN_088ff1f0(owner, record, kind, narrowed3, narrowed4,
                 packed, record->value18, 0, 0);
}
