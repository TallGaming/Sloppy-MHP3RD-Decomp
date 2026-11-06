/*
 * Purpose: consume controller packets from the shared output buffer and drive
 * per-handle state transitions.
 *
 * This is deliberately an UNCOMPILED recovery draft.  It records control
 * flow and field ownership observed in FUN_08827988, but the packet decoder's
 * full output contract and the callback command format are still unknown.
 * Do not register this source or use it as an assembly replacement.
 *
 * Caller contract: FUN_08828e38 calls this with the global controller and the
 * output-buffer view at controller + 0x190.  The buffer has used bytes at 0,
 * its byte data pointer at +8, and is compacted after consumption.
 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef int s32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

struct OutputBuffer_08827988 {
    s32 used;
    s32 capacity;
    u8 *data;
};

/* Decoder-written bytes at stack +4: only flags and receiver are established. */
struct PacketDescriptor_08827988 {
    u8 unknown_00;
    u8 flags_01;
    u8 receiver_02;
};

struct CommandWord_08827988 {
    u8 size;
    u8 unknown_01;
    u8 kind_02;
    u8 unknown_03;
};

typedef s32 (*CommandCallback_08827988)(u8 receiver,
                                        struct CommandWord_08827988 *command,
                                        void *context);

/* Contract hypothesis: a negative return tells the caller how many input
 * bytes became available; zero ends this pass; a positive return names one
 * packet span. */
extern s32 FUN_08826fa4(void *controller, const u8 *input, s32 input_size,
                         struct PacketDescriptor_08827988 *descriptor);
extern void FUN_088ebb18(void *destination, const void *source, s32 size);
extern s32 FUN_08826f6c(void *controller, s32 kind, s32 value);
extern void FUN_08826d60(void *controller, unsigned int index,
                         unsigned int new_state);
extern void FUN_08827944(void *controller);
extern void FUN_0880c1ac(void *destination, const void *source, s32 size);

/* Known controller fields are intentionally represented by FIELD() pending a
 * common controller definition.  These offsets are facts from the target;
 * names are hypotheses. */
/* +0x22: handle count; +0x23: selected handle; +0x64: bit flags;
 * +0x68[index]: per-handle state; +0x78: current float timestamp;
 * +0xe4/+0xf4[index*4]: per-handle float/timer words; +0x13c[index]:
 * per-handle command byte; +0x144/+0x148: callback and its context. */
/* The four-byte command staging record is the global-state field at +0x1a5bc;
 * FUN_08827944 initializes that same record before submitting a command. */
static void refresh_command_state_08827988(void *controller, u8 receiver,
                                             struct CommandWord_08827988 *command)
{
    u8 current = FIELD(controller, u8, receiver + 0x68);

    switch (command->kind_02) {
    case 2:
        if (current == 3) {
            FUN_08826d60(controller, receiver, 4);
            FIELD(controller, float, receiver * 4 + 0xf4) =
                FIELD(controller, float, 0x78);
            FIELD(controller, float, receiver * 4 + 0xe4) =
                FIELD(controller, float, 0x78);
            FIELD(controller, u8, receiver + 0x13c) = command->unknown_03;
        }
        break;
    case 3:
        if (current == 4) {
            FUN_08826d60(controller, receiver, 3);
            FIELD(controller, s32, receiver * 4 + 0xf4) = 0;
            FIELD(controller, u8, receiver + 0x13c) = 0;
            FIELD(controller, float, receiver * 4 + 0xe4) =
                FIELD(controller, float, 0x78);
        }
        break;
    case 4:
        if (current == 3) {
            FUN_08826d60(controller, receiver, 5);
            FIELD(controller, float, receiver * 4 + 0xe4) =
                FIELD(controller, float, 0x78);
        }
        break;
    default:
        break;
    }
}

/* UNCOMPILED: low opcode 1 has four submodes selected from global command
 * byte 2.  Low opcodes 2 and 3 call the controller callback at +0x144 with
 * its context at +0x148.  Low opcodes 4 and above report kind 5.  The target
 * callback failure path reports kind 12.  The exact decoder/callback
 * ownership of the four-byte word remains to be recovered before this can be
 * made complete. */
s32 FUN_08827988_partial(void *controller, struct OutputBuffer_08827988 *buffer)
{
    s32 consumed = 0;
    struct PacketDescriptor_08827988 descriptor;

    for (;;) {
        s32 packet_size = FUN_08826fa4(controller, buffer->data + consumed,
                                        buffer->used - consumed, &descriptor);
        if (packet_size < 0) {
            consumed -= packet_size;
            continue;
        }
        if (packet_size == 0)
            break;

        /* A six-byte packet prefix precedes payload.  High-nibble flags may
         * select an additional four-byte prefix; receiver-state filtering
         * occurs before command dispatch. */
        if (descriptor.receiver_02 < FIELD(controller, u8, 0x22)) {
            u8 state = FIELD(controller, u8, descriptor.receiver_02 + 0x68);
            u8 flags = descriptor.flags_01;
            s32 payload_size = packet_size - 6;
            const u8 *payload = buffer->data + consumed + 6;

            if (state < 7 && ((1u << state) & 0x61u) == 0) {
                if ((flags & 0xf0) != 0 && payload_size != 4) {
                    payload_size -= 4;
                    payload += 4;
                }
                if (payload_size > 0) {
                    struct CommandWord_08827988 command;

                    /* The target repeatedly loads a four-byte command and
                     * advances by command.size.  Completion of kind 1 needs
                     * the missing submode semantics noted above. */
                    FUN_088ebb18(&command, payload, 4);
                    if (command.size >= 4) {
                        u8 opcode = flags & 0x0f;

                        /* Opcode 1 dispatches command.kind_02.  Kinds 2, 3,
                         * and 4 contain the transitions above.  Kind 1 uses
                         * controller->selected handle, submits via
                         * FUN_08827944 on one transition, and sets a bit in
                         * controller +0x64; its exact precondition remains
                         * unresolved.  Kinds 0 and unknown values use the
                         * callback path. */
                        if (opcode == 1) {
                            refresh_command_state_08827988(controller,
                                                           descriptor.receiver_02,
                                                           &command);
                        } else if (opcode == 2 || opcode == 3) {
                            /* Target: callback(receiver, global_command,
                             * FIELD(controller, void *, 0x148)); callback is
                             * FIELD(controller, CommandCallback_08827988,
                             * 0x144).  Preserve that relationship until the
                             * command-word ownership is established. */
                        } else if (opcode >= 4) {
                            FUN_08826f6c(controller, 5, flags);
                        }
                    }
                }
            }
        }
        consumed += packet_size;
    }

    buffer->used -= consumed;
    if (buffer->used > 0)
        FUN_0880c1ac(buffer->data, buffer->data + consumed, buffer->used);
    return 0;
}
