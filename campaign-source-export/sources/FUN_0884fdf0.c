/*
 * FUN_0884fdf0: assemble the menu-frame descriptor sequence for an owner.
 *
 * PARKED field view.  Synthetic calls establish the first dependency chain:
 * resolve descriptor 549, then forward it with the owner's 0x14d0 substate,
 * the low bytes of the page/count lanes, and a local descriptor.  The local
 * descriptor carries signed coordinates at +0x18 and +0x1a.  Its complete
 * layout, setup, and the later descriptor-submission calls remain unresolved.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef unsigned int u32;

struct FrameOwner_0884fdf0 {
    u8 unknown[0x14d0];
    void *substate;
};

struct FrameDescriptor_0884fdf0 {
    u8 unknown[0x18];
    s16 x;
    s16 y;
};

/* The resolver's registered declaration is ABI-incomplete; result use is observed. */
void *FUN_08867d40(void *record, u16 value);
void FUN_0884f4d0(struct FrameOwner_0884fdf0 *owner, void *descriptor,
                  u8 page, u8 count, struct FrameDescriptor_0884fdf0 *frame);

void FUN_0884fdf0_field_view(struct FrameOwner_0884fdf0 *owner,
                             u32 request, u32 page_lane, u32 count_lane)
{
    struct FrameDescriptor_0884fdf0 frame;
    void *descriptor;

    /* The concrete initialization of frame is unresolved. */
    (void)request;
    descriptor = FUN_08867d40(0, 549);
    FUN_0884f4d0(owner, descriptor, (u8)page_lane, (u8)count_lane, &frame);
}
