/*
 * Purpose: append a big-endian four-byte value to the packet cursor's record
 * area and advance its unsigned halfword accounting fields.
 *
 * Evidence: the target reads arg0 halfwords at offsets 0 and 2, appends four
 * byte lanes of arg1, advances both fields by four, and resets the word at
 * D_08a291a0 + 4 to 0x8008 when the new total reaches 1404.  Six direct
 * caller sites provide a cursor-like first argument and a scalar second word.
 *
 * This is an uncompiled partial, not a match claim.  D_08a291a0 is a genuine
 * binding, but the containing global layout and the cursor object owner are
 * still unknown.  The field names document observed roles only.
 */
typedef unsigned char MhpU8;
typedef unsigned short MhpU16;
typedef unsigned int MhpU32;

typedef struct MhpPacketCursor {
    MhpU16 total_bytes;
    MhpU16 record_offset;
    MhpU8 reserved[12];
    MhpU8 records[];
} MhpPacketCursor;

extern MhpU32 D_08a291a0[];

void FUN_0882ffb4(MhpPacketCursor *cursor, MhpU32 value)
{
    MhpU8 *record = cursor->records + cursor->record_offset;

    if ((MhpU16)(cursor->total_bytes + 4) >= 1404)
        D_08a291a0[1] = 0x8008;

    record[8] = (MhpU8)(value >> 24);
    record[9] = (MhpU8)(value >> 16);
    record[10] = (MhpU8)(value >> 8);
    record[11] = (MhpU8)value;
    cursor->record_offset = (MhpU16)(cursor->record_offset + 4);
    cursor->total_bytes = (MhpU16)(cursor->total_bytes + 4);
}
