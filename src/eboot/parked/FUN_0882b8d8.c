/*
 * Purpose: copy two four-float vectors into an object, then store a scalar.
 * Hypothesis: offsets 0x20 and 0x30 are adjacent vector fields.
 *
 * Attempt 1: a readable vector-typed assignment compiles to scalar GPR loads
 * and stores. The reference uses VFPU vector transfers for both copies.
 *
 * Blocker: GCC 4.0.4 group B has no C lowering for this VFPU transfer shape.
 * Revisit after the project decides on supported VFPU intrinsics or inline asm.
 */
typedef float vec4f __attribute__((vector_size(16)));

#define FIELD(base, type, offset) (*(type *)((char *)(base) + (offset)))

void FUN_0882b8d8(void *object, const vec4f *first, const vec4f *second,
                  float value) {
    FIELD(object, vec4f, 0x20) = *first;
    FIELD(object, vec4f, 0x30) = *second;
    FIELD(object, float, 0xA8) = value;
}
