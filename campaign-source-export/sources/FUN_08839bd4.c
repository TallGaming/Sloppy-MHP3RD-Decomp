/*
 * Purpose: retain the verified caller ABI and entry-flow boundary for
 * FUN_08839bd4. This is an uncompiled partial field view, not a body.
 * One caller supplies four integer-register arguments. The leaf reads memory
 * and returns a scalar that the caller consumes. No store or callee ABI is
 * established. The source-level expression needs typed object provenance.
 */
#include <stdint.h>

uint32_t FUN_08839bd4(uint32_t value_or_pointer,
                      uint32_t loaded_input,
                      uint32_t selector_or_address,
                      uint32_t inherited_input);
