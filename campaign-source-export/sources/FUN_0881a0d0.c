/*
 * Purpose: retain the supported caller-side ABI view for FUN_0881a0d0.
 *
 * This is an uncompiled recovery fragment, not a candidate implementation.
 * The target owns a 128-byte frame and invokes FUN_08819f78 five times using
 * a frame-local receiver.  Recovered call sites pass a byte-stream-like first
 * argument, a word-sized byte count, and a 20-byte result buffer as the third
 * argument; several callers compare that result as a digest.  The receiver
 * representation, algorithm identity, and call predicate are not proved.
 */
#include <stdint.h>

typedef struct FUN_0881a0d0_Output20 {
    uint8_t bytes[20];
} FUN_0881a0d0_Output20;

typedef struct FUN_0881a0d0_FrameView {
    uint8_t receiver_and_locals[128];
} FUN_0881a0d0_FrameView;

/* The actual FUN_08819f78 parameter types and return contract are unknown. */
extern void FUN_08819f78(void);

typedef uint8_t FUN_0881a0d0_InputByte;

/* ABI only: this declaration is not an implementation or an ownership claim. */
extern void FUN_0881a0d0(const FUN_0881a0d0_InputByte *input,
                          uintptr_t input_byte_count,
                          FUN_0881a0d0_Output20 *result);
