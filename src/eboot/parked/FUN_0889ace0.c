/*
 * FUN_0889ace0: assemble a temporary parameter record and submit it.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: six independent source loads have a different scheduler order.
 */

typedef unsigned int u32;

struct Params_0889ace0
{
    u32 value_00;
    u32 value_04;
    u32 value_08;
    u32 value_0c;
    u32 value_10;
    u32 value_14;
    u32 value_18;
};

void FUN_08865df0(struct Params_0889ace0 *params);

int FUN_0889ace0(const struct Params_0889ace0 *source)
{
    struct Params_0889ace0 params;

    params.value_00 = source->value_00;
    params.value_04 = source->value_04;
    params.value_08 = source->value_08;
    params.value_0c = source->value_0c;
    params.value_10 = source->value_0c;
    params.value_14 = source->value_10;
    params.value_18 = source->value_14;
    FUN_08865df0(&params);
    return 0;
}
