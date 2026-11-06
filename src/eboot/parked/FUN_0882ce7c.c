/*
 * Purpose (hypothesis): seed scalar state, copy four vector-sized regions into
 * the Group-B record, then tail-dispatch the established Group-B coordinator.
 *
 * Diagnostic field view only.  The target directly uses VFPU quad loads and
 * stores, so it is not a permitted plain-C candidate.
 */

typedef unsigned char u8;
typedef float F32;

struct FUN_0882ce7c_RECORD_VIEW {
    u8 before_scalar_0c[0x0c];
    F32 scalar_from_f12_at_0c;
    u8 before_scalar_a8[0xa8 - 0x10];
    F32 scalar_from_f12_at_a8;
    u8 before_tuple_ea0[0xea0 - 0xac];
    F32 tuple_ea0_component_0;
    F32 static_scalar_at_ea4;
};

/*
 * Evidence-backed scalar roles: f12 is stored at +0x0c and +0xa8; a static
 * scalar loaded locally into f0 is stored at +0xea4.  The associated quad
 * copies and their source-pointer ownership remain decoder-only evidence.
 */
