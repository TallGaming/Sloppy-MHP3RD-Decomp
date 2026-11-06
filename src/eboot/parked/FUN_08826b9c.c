/*
 * FUN_08826b9c: advance the state and invoke an optional member callback.
 *
 * The two callback words are modeled as the observed PSP member-function
 * pointer representation: code/virtual offset plus a tagged this-adjustment.
 */
typedef unsigned char u8;
typedef unsigned int u32;
typedef void (*Callback08826b9c)(void *self);

struct Object08826b9c {
    u32 unknown00;
    Callback08826b9c callback04;
    int adjustment08;
};

extern int FUN_08826ac4(struct Object08826b9c *object);

void FUN_08826b9c(struct Object08826b9c *object)
{
    Callback08826b9c callback;
    void *self;
    int adjustment;
    int half_adjustment;
    int is_virtual;

    if (FUN_08826ac4(object) == 0) {
        return;
    }
    callback = object->callback04;
    if (callback == 0) {
        return;
    }
    adjustment = object->adjustment08;
    half_adjustment = adjustment >> 1;
    is_virtual = adjustment & 1;
    self = (u8 *)object + half_adjustment;
    if (is_virtual != 0) {
        callback = *(Callback08826b9c *)((u8 *)*(void **)self + (u32)callback);
    }
    callback(self);
}
