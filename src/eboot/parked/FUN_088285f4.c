/*
 * Purpose: refresh controller handles, update their two half-word tracking
 * arrays for resolver type four, then publish and clear pending motion.
 *
 * Hypothesis: handles_08, sample_104, phase_10c, and result_da are parallel
 * controller records.  Field offsets and widths are observed; semantic names
 * are provisional.  FUN_088270a8 is a controller refresh prerequisite.
 * The known direct caller is FUN_08828e64.  The resolver and state setter
 * remain unclassified game-code dependencies; no library attribution is made.
 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef short s16;
typedef int s32;

struct Controller_088285f4 {
    u8 unknown_00[8];
    s32 handles_08[6];
    u8 unknown_20[2];
    u8 handle_count_22;
    u8 selected_23;
    u8 unknown_24[0x8c - 0x24];
    s32 pending_x_8c;
    s32 pending_y_90;
    s32 previous_x_94;
    s32 previous_y_98;
    s32 total_x_9c;
    s32 total_y_a0;
    u8 unknown_a4[0xda - 0xa4];
    u16 result_da[3];
    u8 unknown_e0[0x104 - 0xe0];
    u16 sample_104[6];
    u16 phase_10c[6];
    u8 unknown_118[0x140 - 0x118];
    s32 phase_limit_140;
};

extern s32 FUN_088270a8(struct Controller_088285f4 *controller);
extern s32 FUN_0887a7e4(s32 handle, u16 *result);
extern void FUN_08826d60(struct Controller_088285f4 *controller,
                         unsigned int index, unsigned int new_state);

s32 FUN_088285f4(struct Controller_088285f4 *controller)
{
    s32 index;

    if (FUN_088270a8(controller) > 0) {
        controller->result_da[1] = 0;

        for (index = 0; index < controller->handle_count_22; index++) {
            if (controller->handles_08[index] >= 0 &&
                FUN_0887a7e4(controller->handles_08[index],
                              controller->result_da) >= 0 &&
                (s16)controller->result_da[0] == 4) {
                u16 value = controller->result_da[2];
                u16 phase = controller->phase_10c[index];

                if (value < 0x1ffa &&
                    controller->sample_104[index] - controller->pending_x_8c >= value) {
                    if (phase != 0xffff)
                        phase++;
                } else if (phase != 0) {
                    phase--;
                }

                controller->sample_104[index] = value;
                controller->phase_10c[index] = phase;
                if (phase < controller->phase_limit_140)
                    FUN_08826d60(controller, index, 6);
            }
        }
    }

    controller->previous_x_94 = controller->pending_x_8c;
    controller->previous_y_98 = controller->pending_y_90;
    controller->total_x_9c += controller->pending_x_8c;
    controller->total_y_a0 += controller->pending_y_90;
    controller->pending_y_90 = 0;
    controller->pending_x_8c = 0;
    return 0;
}
