/*
 * Purpose: retain three 16-byte tuples, build two derived matrix slots,
 * and pass those slots to the separate two-pointer output helper.
 *
 * Hypothesis: FUN_0882be4c takes a matrix slot and three tuple pointers.
 * No unproved readonly contract is asserted for the opaque helper calls.
 * Both helpers retain separate VFPU implementations; this wrapper asserts
 * their pointer ABI, not a matrix-copy operation. Offsets come from callers.
 */
typedef unsigned int u32;
typedef unsigned char u8;

struct Tuple4_0882bfb0 {
    float element[4];
};

struct Matrix4_0882bfb0 {
    float element[16];
};

struct Record_0882bfb0 {
    u8 unknown_0000[0xea0];
    struct Tuple4_0882bfb0 input_a_ea0;
    struct Tuple4_0882bfb0 input_b_eb0;
    struct Tuple4_0882bfb0 input_c_ec0;
    u8 unknown_ed0[0x10];
    struct Matrix4_0882bfb0 derived_a_ee0;
    struct Matrix4_0882bfb0 derived_b_f20;
    u8 unknown_f60[0x40];
    struct Matrix4_0882bfb0 output_b_fa0;
    struct Matrix4_0882bfb0 output_a_fe0;
};

extern void FUN_0882be4c(void *slot, void *tuple_a, void *tuple_b, void *tuple_c);
extern void FUN_08875fbc(void *output, void *matrix);

void FUN_0882bfb0(struct Record_0882bfb0 *record,
                  struct Tuple4_0882bfb0 *input_a,
                  struct Tuple4_0882bfb0 *input_b,
                  struct Tuple4_0882bfb0 *input_c)
{
    record->input_a_ea0 = *input_a;
    record->input_b_eb0 = *input_b;
    record->input_c_ec0 = *input_c;
    FUN_0882be4c(&record->derived_a_ee0, input_a, input_b, input_c);
    FUN_0882be4c(&record->derived_b_f20, input_a, input_b, input_c);
    FUN_08875fbc(&record->output_a_fe0, &record->derived_a_ee0);
    FUN_08875fbc(&record->output_b_fa0, &record->derived_b_f20);
}
