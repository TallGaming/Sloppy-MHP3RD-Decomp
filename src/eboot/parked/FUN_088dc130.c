typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

typedef struct TailState {
    u8 before_78[78];
    u8 flag_78;
    u8 flag_79;
    u32 count_80;
    u8 before_154[70];
    u8 flag_154;
    u8 flag_155;
    u8 before_157[1];
    u8 flag_157;
} TailState;

/*
 * Purpose hypothesis: reset a group of state fields in a record.
 *
 * Parked after direct FIELD() and TailState forms. The typed form gets the
 * first two stores in order but allocates the tail pointer to v0 instead of
 * v1 and schedules the byte resets differently. D_089685c4 also needs an
 * absolute declaration in symbols.s. Revisit for an alias-safe layout that
 * keeps the reference pointer register and store order.
 */
extern float D_089685c4;

void FUN_088dc130(void *record)
{
    TailState *tail = (TailState *)((u8 *)record + 160);
    float value = D_089685c4;

    FIELD(record, u16, 148) = 0;
    FIELD(record, float, 136) = value;
    FIELD(record, u32, 128) = 0;
    tail->count_80 = 0;
    tail->flag_157 = 0;
    tail->flag_78 = 0;
    tail->flag_79 = 0;
    tail->flag_154 = 0;
    tail->flag_155 = 0;
}
