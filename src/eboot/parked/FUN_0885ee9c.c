/* Purpose: preserve the evidenced local field-width and scalar-processing view.
 * This is not a whole-function candidate: the callable ABI and the direct
 * callee contract remain unproved because no caller or data-slot owner exists.
 */
#include <stdint.h>

typedef struct {
    uint8_t selector;
    uint8_t unknown_01;
    uint16_t amount;
    float scalar;
} FUN_0885ee9c_input_view;

typedef struct {
    uint32_t result;
} FUN_0885ee9c_output_view;
