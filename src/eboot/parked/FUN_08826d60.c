/*
 * FUN_08826d60: update one byte-state entry and notify on transitions to 5/6.
 *
 * The object layout and callback meanings are hypotheses from this function.
 */
typedef unsigned char u8;
typedef unsigned int u32;
typedef void (*Notify08826d60)(u8 index, void *context);

struct Record08826d60 {
    u32 word00;
};

struct Object08826d60 {
    u8 unknown00[8];
    struct Record08826d60 records08[6];
    u8 unknown20[3];
    u8 selected23;
    u8 unknown24[68];
    u8 states68[228];
    Notify08826d60 notify14c;
    void *context150;
    Notify08826d60 notify154;
    void *context158;
};

extern void FUN_0887ad18(struct Record08826d60 *record);

void FUN_08826d60(struct Object08826d60 *object, unsigned int index,
                  unsigned int new_state)
{
    u8 old_state;

    index = (u8)index;
    new_state = (u8)new_state;
    old_state = object->states68[index];
    object->states68[index] = new_state;

    if (old_state != 5 && new_state == 5) {
        if (index != object->selected23) {
            object->notify14c(index, object->context150);
        }
        return;
    }
    if (old_state != 6 && new_state == 6) {
        if (index != object->selected23) {
            struct Record08826d60 *record;

            record = (struct Record08826d60 *)
                ((u8 *)object + index * sizeof(*record) + 8);
            FUN_0887ad18(record);
            object->notify154(index, object->context158);
        }
    }
}
