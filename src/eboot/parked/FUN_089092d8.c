/*
 * FUN_089092d8: mask a computed two-word value into two object fields.
 *
 * The object and mask field meanings are hypotheses based on this operation.
 */
typedef unsigned char u8;
typedef unsigned int u32;

struct Pair089092d8 {
    u32 word0;
    u32 word4;
};

struct Object089092d8 {
    u8 unknown00[96];
    u32 masked60;
    u32 masked64;
};

extern void FUN_08908a30(struct Pair089092d8 *result,
                         struct Object089092d8 *object);

void FUN_089092d8(struct Object089092d8 *object,
                  const struct Pair089092d8 *mask)
{
    struct Pair089092d8 value;
    u32 mask4;
    u32 mask0;
    u32 value0;
    u32 value4;

    FUN_08908a30(&value, object);
    mask4 = mask->word4; /*P*/
    mask0 = mask->word0; /*P*/
    value4 = value.word4; /*P*/
    value0 = value.word0; /*P*/
    /* Matching shape: preserve the original independent field-store order. */
    object->masked64 = value4 & mask4; /*P*/
    object->masked60 = value0 & mask0; /*P*/
}
