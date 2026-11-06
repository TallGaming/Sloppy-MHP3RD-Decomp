/* Purpose: typed field and call-boundary view for the incomplete dispatcher. */
#include <stdint.h>

typedef struct {
    uint8_t unknown_0[6];
    uint16_t field_6;
} DispatchContext;

typedef struct {
    uint8_t unknown_0;
    uint8_t selector;
} SelectorObject;

/* Verified direct interfaces; their return use in this target remains partial. */
extern uint8_t FUN_0885dca8(DispatchContext *context, SelectorObject *selector);
extern void *FUN_0885ca20(DispatchContext *context, SelectorObject *selector);

/*
 * The real target reads selector->selector, calls the byte selector with the
 * first two lanes unchanged, reads context->field_6 on a later path, and can
 * call the table resolver.  The branch relation between these values requires
 * more context-state witnesses, so this is intentionally not a candidate.
 */
int FUN_0885ddb8_partial(DispatchContext *context, SelectorObject *selector)
{
    uint8_t selector_id = selector->selector;
    uint8_t selected_value = FUN_0885dca8(context, selector);
    uint16_t context_field = context->field_6;

    (void)selector_id;
    (void)selected_value;
    (void)context_field;
    return 0;
}
