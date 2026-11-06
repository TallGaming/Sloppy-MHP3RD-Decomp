/*
 * Purpose: retain the supported ABI and record-layout view for FUN_0885fa60.
 *
 * This is not a whole-function candidate. The direct caller FUN_0885fb04
 * forwards four integer lanes unchanged. This target forwards its first,
 * second, and fourth lanes to FUN_0885f6a8 while setting the third lane to
 * zero. Synthetic record observations show reads at offsets 0, 2, 36, and 38
 * from the returned record base. Each observed state byte has a special
 * 255 path that returns zero. The missing selector resolver ABI prevents a
 * complete declaration and field meaning.
 */
#include <stdint.h>

typedef struct FUN_0885fa60_RecordPair {
    uint8_t first_state;
    uint8_t unknown_1;
    uint16_t first_value;
    uint8_t unknown_4[32];
    uint8_t second_state;
    uint8_t unknown_37;
    uint16_t second_value;
} FUN_0885fa60_RecordPair;

/* FUN_0885f6a8 is PARKED; its public callable declaration is not established. */

