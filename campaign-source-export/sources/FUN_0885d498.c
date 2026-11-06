/*
 * Purpose: test the observed selector-range predicate and resolved record
 * first-word test using the target's two incoming integer lanes.
 */
typedef unsigned char u8;
typedef unsigned short u16;

typedef struct SelectorObject0885d498 {
    u8 field_00;
    u8 selector;
    u16 index;
} SelectorObject0885d498;

extern const u8 *FUN_0885be6c(void *context, const SelectorObject0885d498 *selector);

int FUN_0885d498(void *context, const SelectorObject0885d498 *selector)
{
    const u16 *record;

    if ((u8)(selector->selector - 5) >= 13) {
        return 0;
    }
    record = (const u16 *)FUN_0885be6c(context, selector);
    return record != 0 ? *record : 0;
}
