/*
 * Purpose: retain the verified input-field and forwarding ABI view for the
 * selector wrapper at FUN_0885d240.
 *
 * This is intentionally not a whole-function candidate.  The wrapper reads
 * selector byte +1 and index halfword +2 from its second lane, tests its third
 * integer lane, and forwards all eight observed integer lanes.  The final
 * dispatch target is still PARKED, so its complete prototype and return
 * contract are not available to express this safely as callable C.
 */
#include <stdint.h>

typedef struct FUN_0885d240_SelectorRecord {
    uint8_t unknown_0;
    uint8_t selector;
    uint16_t index;
} FUN_0885d240_SelectorRecord;

/* FUN_0885d1e0 is confirmed as (unsigned int, const unsigned short *). */
extern int FUN_0885d1e0(unsigned int unused, const unsigned short *record);

/*
 * Observed forwarding lanes before both direct calls:
 * context, record, record->index, argument_4 through argument_8.
 * The selector byte participates in the unresolved dispatch decision.
 */
