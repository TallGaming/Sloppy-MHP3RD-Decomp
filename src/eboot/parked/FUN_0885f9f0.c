/* Purpose: retain the supported local input-width view while callable ABI is unknown. */
#include <stdint.h>

typedef struct {
    uint16_t selector;
    uint16_t flags;
    uint32_t state;
} FUN_0885f9f0_input_view;
