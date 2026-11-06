typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

struct Source_0882af30
{
    u8 pad_00[4];
    u16 half_04;
    u16 half_06;
    u16 half_08;
    u16 half_0a;
    u32 word_0c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};

struct State_0882af30
{
    u8 pad_000[0xe0c];
    struct Source_0882af30 *source_e0c;
    u8 pad_e10[0xe7c - 0xe10];
    u16 half_e7c;
    u16 half_e7e;
    u16 half_e80;
    u16 half_e82;
    u32 word_e84;
    u32 word_e88;
    u32 word_e8c;
    u32 word_e90;
};

void FUN_0882ad90(struct State_0882af30 *state);

#define COPY_RECORD(state, source) do { \
    u32 word_18 = (source)->word_18; \
    u16 half_04 = (source)->half_04; \
    u16 half_06 = (source)->half_06; \
    u16 half_08 = (source)->half_08; \
    u16 half_0a = (source)->half_0a; \
    u32 word_0c = (source)->word_0c; \
    u32 word_10 = (source)->word_10; \
    u32 word_14 = (source)->word_14; \
    (state)->word_e90 = word_18; \
    (state)->half_e7c = half_04; \
    (state)->half_e7e = half_06; \
    (state)->half_e80 = half_08; \
    (state)->half_e82 = half_0a; \
    (state)->word_e84 = word_0c; \
    (state)->word_e88 = word_10; \
    (state)->word_e8c = word_14; \
} while (0)

void FUN_0882af30(struct State_0882af30 *state)
{
    if (state->source_e0c != 0)
    {
        COPY_RECORD(state, state->source_e0c);
        return;
    }

    FUN_0882ad90(state);
    COPY_RECORD(state, state->source_e0c);
}
