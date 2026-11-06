/*
 * Purpose: select an audio row and publish its sizes and cumulative offsets.
 * The audio owner stores the row count at byte 8 and 32-word rows at byte 16.
 * The diagnostic calls use two verified no-argument formats and one message.
 */
typedef struct {
    unsigned reserved_before_count[2];
    unsigned row_count;
    unsigned reserved_before_rows;
    unsigned rows[][32];
} AudioRows;

extern AudioRows *D_08a320c4;
extern unsigned D_08a320c0;
extern unsigned D_08a31fc0[32];
extern unsigned D_08a32040[32];
extern signed char D_09bc1ed0;
extern const char D_08965b78[];
extern const char D_08965b80[];
extern const char D_08965b88[];
extern int FUN_0880d4b4(const char *, ...);
extern int FUN_0880d590(const char *);

int FUN_088582bc(unsigned index)
{
    AudioRows *owner = D_08a320c4;
    unsigned position;
    unsigned offset = 0;

    if (index >= owner->row_count) {
        if (D_09bc1ed0) {
            FUN_0880d4b4(D_08965b78);
            if (D_09bc1ed0) {
                FUN_0880d4b4(D_08965b80);
                if (D_09bc1ed0) {
                    FUN_0880d590(D_08965b88);
                }
            }
        }
        return (int)0x80000003u;
    }

    D_08a320c0 = index;
    for (position = 0; position < 32; ++position) {
        unsigned size;
        D_08a31fc0[position] = offset;
        size = owner->rows[index][position];
        D_08a32040[position] = size;
        offset += size;
    }
    return 0;
}

