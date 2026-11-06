typedef unsigned char u8;
typedef unsigned short u16;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

/* Purpose hypothesis: copy three floats and one 16-bit field into a record. */
void FUN_088ccbf0(void *record, const void *source)
{
    FIELD(record, float, 39628) = FIELD(source, float, 0);
    FIELD(record, float, 39632) = FIELD(source, float, 4);
    FIELD(record, u16, 39640) = FIELD(source, u16, 24);
    FIELD(record, float, 39636) = FIELD(source, float, 8);
}
