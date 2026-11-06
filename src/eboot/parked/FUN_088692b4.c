/*
 * Purpose: pass two fields from an indexed 252-byte record to a handler.
 * Hypothesis: the record payload begins at object offset 0x30.
 */
extern void FUN_088691fc(void *object, unsigned char byte_value,
                         unsigned short half_value);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_088692b4(void *object, int index)
{
    const void *record = (const unsigned char *)object + index * 0xfc + 0x30;
    unsigned char byte_value = FIELD(record, unsigned char, 0x76);
    unsigned short half_value = FIELD(record, unsigned short, 0x4e);
    FUN_088691fc(object, byte_value, half_value);
}
