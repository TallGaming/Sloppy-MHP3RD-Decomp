/*
 * FUN_0891fac4: reset selected fields in a large state object.
 *
 * The object layout is unknown.  Named tail fields preserve the secondary-base
 * access used for the large offsets.
 */
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

struct Tail0891fac4 {
    u8 unknown00[24];
    u32 word18;
    u8 unknown1c[6];
    s16 half22;
    s16 half24;
    u16 half26;
    u16 half28;
};

void FUN_0891fac4(void *object)
{
    struct Tail0891fac4 *tail = (struct Tail0891fac4 *)((u8 *)object + 1564);

    FIELD(object, u8, 451) = 0;
    FIELD(object, u8, 1214) = 0;
    FIELD(object, u8, 1396) = 0;
    FIELD(object, u8, 1213) = 0;
    FIELD(object, s16, 1390) = -1;
    /* Matching shape: rotate independent clears for the original store order. */
    FIELD(object, u8, 448) = 0;
    tail->word18 = 0;
    tail->half26 = 255; /*P*/
    tail->half22 = -1; /*P*/
    tail->half28 = 255; /*P*/
    tail->half24 = -1; /*P*/
}
