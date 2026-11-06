/*
 * Purpose: read an indexed byte from the nested audio record selected by an
 * outer record. The outer and nested four-byte keys are checked before use.
 */
typedef struct {
    unsigned prefix[5];
    unsigned child_offset;
} AudioRecord;

typedef struct {
    unsigned reserved_before_limit[2];
    unsigned last_index;
    unsigned reserved_before_offsets;
    unsigned offsets[];
} AudioRecordTable;

extern signed char D_09bc1ed0;
extern const char D_08965c24[];
extern const char D_08965c2c[];
extern const char D_08965c34[];
extern const char D_08965c48[];
extern int FUN_08858f5c(const char *record);
extern int FUN_08858f8c(const char *record);
extern int FUN_0880d4b4(const char *, ...);
extern int FUN_0880d590(const char *);

int FUN_0885901c(const AudioRecord *record, unsigned char index)
{
    const AudioRecordTable *child;
    unsigned offset;
    if (!FUN_08858f5c((const char *)record)) {
        if (D_09bc1ed0) {
            FUN_0880d4b4(D_08965c24);
            if (D_09bc1ed0) {
                FUN_0880d4b4(D_08965c2c);
                if (D_09bc1ed0)
                    FUN_0880d590(D_08965c34);
            }
        }
        return (int)0x80000006u;
    }

    child = (const AudioRecordTable *)((const unsigned char *)record + record->child_offset);
    if (!FUN_08858f8c((const char *)child)) {
        if (D_09bc1ed0) {
            FUN_0880d4b4(D_08965c24);
            if (D_09bc1ed0) {
                FUN_0880d4b4(D_08965c2c);
                if (D_09bc1ed0)
                    FUN_0880d590(D_08965c48);
            }
        }
        return (int)0x80000007u;
    }

    if (index > child->last_index)
        return (int)0x8000000eu;
    offset = child->offsets[index];
    if (offset == 0xffffffffu)
        return (int)0x8000000eu;
    return ((const unsigned char *)child)[offset];
}

