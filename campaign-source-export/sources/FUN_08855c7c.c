/* Set two related fields from selector-indexed halfword tables. */
typedef unsigned short u16;
typedef unsigned int u32;
struct TargetContext;

extern u16 FUN_088554ac(void *context, u16 index);
extern u16 FUN_088554cc(void *context, u16 index);
extern void FUN_088559ac(struct TargetContext *context, u32 field, u32 value,
                         int mode, int flags);

void FUN_08855c7c(struct TargetContext *context, u32 field_base, u32 selector)
{
    u16 first_value = FUN_088554ac(context, (u16)selector);
    u16 second_value;

    FUN_088559ac(context, field_base + 39, first_value, 0, 0);
    second_value = FUN_088554cc(context, (u16)selector);
    FUN_088559ac(context, field_base + 47, second_value, 0, 0);
}

