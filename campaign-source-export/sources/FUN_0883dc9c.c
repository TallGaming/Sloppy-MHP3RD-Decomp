/* Purpose: retain the verified lane, output-field, and dependency flow for this uncompiled target. */
#include <stdint.h>

typedef struct TargetState {
    uint8_t unknown[4835];
    uint8_t completion_byte;
} TargetState;

typedef struct OutputA {
    uint16_t first;
    uint16_t second;
    uint8_t unknown[2];
    uint8_t selector_low;
    uint8_t selector_high;
} OutputA;

typedef struct OutputB {
    uint16_t third;
    uint8_t selector_low;
    uint8_t selector_high;
} OutputB;

/* Both dependency callable contracts remain unresolved; these are flow-only views. */
extern int FUN_0883d830_flow_only(void);
extern int FUN_0883d9b8_flow_only(void);

/*
 * Direct caller FUN_0883df20 supplies state, two input lanes, two scalar
 * lanes, OutputA, OutputB, and an eighth forwarded lane.  The target makes
 * two calls to 0883d830 around one call to 0883d9b8 and commits three local
 * halfword results into the two output objects.  Artificial probes show that
 * lanes 2 and 4 jointly gate the final 0883d830 call. Its condition ordering
 * and status/selector composition depend on unresolved dependency results.
 */
static int FUN_0883dc9c_partial(TargetState *state, void *first_input,
                                void *second_input, uint32_t first_value,
                                uint32_t second_value, OutputA *out_a,
                                OutputB *out_b, uint32_t forwarded)
{
    (void)state;
    (void)first_input;
    (void)second_input;
    (void)first_value;
    (void)second_value;
    (void)forwarded;
    (void)FUN_0883d830_flow_only();
    (void)FUN_0883d9b8_flow_only();
    (void)FUN_0883d830_flow_only();
    out_a->first = 0;   /* Target-local values are dependency-produced. */
    out_a->second = 0;
    out_b->third = 0;
    return 0;           /* Flow-only partial; not a matching candidate. */
}
