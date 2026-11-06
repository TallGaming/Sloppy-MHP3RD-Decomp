/* Purpose: sum the signed amounts whose selectors match in a table entry. */
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;

struct Entry0885ca68 {
    u8 field_00;
    u8 first_selector;
    s8 first_amount;
    u8 second_selector;
    s8 second_amount;
};

extern int FUN_0885ca20(unsigned int context, unsigned int index);

int FUN_0885ca68(void *context, u16 index, u8 selector)
{
    const struct Entry0885ca68 *entry =
        (const struct Entry0885ca68 *)FUN_0885ca20((unsigned int)context, index);
    s8 amount = 0;

    if (entry != 0) {
        if (entry->first_selector == selector)
            amount += entry->first_amount;
        if (entry->second_selector == selector)
            amount += entry->second_amount;
    }
    return amount;
}
