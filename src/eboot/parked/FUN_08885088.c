/* Purpose: reset a second small mixed-width record. */
#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_08885088(void *record)
{
    FIELD(record, unsigned char, 2) = 0;
    FIELD(record, unsigned char, 0) = 0;
    FIELD(record, unsigned int, 0x0c) = 0;
    FIELD(record, unsigned char, 1) = 0;
    FIELD(record, unsigned int, 0x10) = 0;
    FIELD(record, unsigned char, 8) = 0;
    FIELD(record, unsigned char, 7) = 0;
    FIELD(record, unsigned char, 6) = 0;
    FIELD(record, unsigned char, 5) = 0;
    FIELD(record, unsigned char, 4) = 0;
    FIELD(record, unsigned char, 3) = 0;
    FIELD(record, unsigned int, 0x14) = 0;
}
