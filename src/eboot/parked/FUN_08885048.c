/* Purpose: reset a small mixed-width record. */
#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_08885048(void *record)
{
    FIELD(record, unsigned char, 0x24) = 0;
    FIELD(record, unsigned int, 4) = 0;
    FIELD(record, unsigned char, 0) = 0;
    FIELD(record, unsigned int, 8) = 0;
    FIELD(record, unsigned char, 0x0c) = 0;
    FIELD(record, unsigned int, 0x10) = 0;
    FIELD(record, unsigned int, 0x14) = 0;
    FIELD(record, unsigned char, 0x1d) = 0;
    FIELD(record, unsigned char, 0x1c) = 0;
    FIELD(record, unsigned char, 0x1b) = 0;
    FIELD(record, unsigned char, 0x1a) = 0;
    FIELD(record, unsigned char, 0x19) = 0;
    FIELD(record, unsigned char, 0x18) = 0;
    FIELD(record, unsigned int, 0x20) = 0;
}
