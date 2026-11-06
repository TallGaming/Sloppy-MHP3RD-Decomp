typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

typedef struct SourceData {
    float first;
    float second;
    float third;
    u16 code;
} SourceData;

typedef struct RecordData {
    u8 before_count[112];
    u32 count;
    u32 copied_code;
    u32 after_code;
    u8 before_values[4];
    float first;
    float second;
    float third;
    u8 before_code[252];
    u16 code;
} RecordData;

/*
 * Purpose hypothesis: initialize a record from three floats and a code.
 *
 * Parked after FIELD(), typed-struct, and explicit-mask variants. GCC keeps
 * all field accesses but reorders the independent stores, uses different
 * float registers for the first and third values, and removes the redundant
 * zero-extension mask. Revisit when an alias-preserving source layout is known.
 */
void FUN_088a4264(RecordData *record, const SourceData *source)
{
    u16 code = source->code;
    u32 copied_code = ((u32)code) & 0xffff;

    record->count = 0;
    record->first = source->first;
    record->code = code;
    record->second = source->second;
    record->copied_code = copied_code;
    record->third = source->third;
    record->after_code = 0;
}
