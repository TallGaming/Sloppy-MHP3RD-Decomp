/*
 * FUN_08902548: run two object updates, then snapshot two state words.
 *
 * The object layout and field purposes are hypotheses based on this access.
 */
typedef unsigned int u32;

struct Object08902548 {
    u32 unknown00[13];
    u32 state34;
    u32 state38;
    u32 unknown3c[5];
    u32 snapshot50;
    u32 snapshot54;
};

extern void FUN_088f9ce4(struct Object08902548 *object);
extern void FUN_08901db0(struct Object08902548 *object);

void FUN_08902548(struct Object08902548 *object)
{
    FUN_088f9ce4(object);
    FUN_08901db0(object);
    object->snapshot50 = object->state38;
    object->snapshot54 = object->state34;
}
