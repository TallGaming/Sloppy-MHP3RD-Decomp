/*
 * Purpose field view: initialize a private state record and submit descriptor
 * batches through the manager-side services.
 *
 * This is deliberately an uncompiled partial view.  Synthetic zero-state
 * paths reach the small slot setter once and the descriptor-batch service
 * once, while a third direct call remains path-dependent.  The owner of the
 * private state and the declaration-level parameters are not yet proved.
 */
typedef int s32;
typedef short s16;

struct Descriptor_08900bf0 {
    s32 object;
    s32 second;
    s32 third;
    s32 fourth;
    s16 fifth;
    s16 sixth;
};

void FUN_0886821c(void *record, unsigned short value);
void FUN_08900bf0(void *manager, s32 object, s32 second, s32 count,
                  s32 fourth, s16 fifth, s16 sixth, s32 third);

/* FUN_08890600 needs its private-state owner and conditional third-call ABI. */
