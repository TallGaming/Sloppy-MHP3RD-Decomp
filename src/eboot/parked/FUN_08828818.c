/*
 * Purpose: partial recovery of the private controller-runtime initializer.
 *
 * FUN_08828818 is a 968-byte Group-B routine.  Its target call inventory has
 * nine clear-helper calls, one copy-helper call, one per-record transition,
 * and one local helper call.  Subsequent controller callers identify the
 * initialized object as the D_08a20fec runtime root.  This artifact records
 * only field ownership independently supported by those callers; it is not a
 * whole-function C candidate and must not be compiled.
 */
typedef unsigned char u8;
typedef int s32;

typedef struct ByteBuffer {
    s32 used;                    /* +0 */
    s32 capacity;                /* +4 */
    u8 *data;                    /* +8 */
} ByteBuffer;

typedef void (*RecordNotify)(u8 index, void *context);

typedef struct ControllerRuntime {
    u8 unknown_00_to_1b[0x1c];
    s32 active;                  /* +0x1c */
    u8 unknown_20;
    u8 mode;                     /* +0x21 */
    u8 record_count;             /* +0x22 */
    u8 selected_record;          /* +0x23 */
    u8 unknown_24_to_67[0x44];
    /* Byte-state view used as +0x68+record index.  It aliases wider views
     * at +0x124/+0x128/+0x12c in other routines; exact member ownership is
     * unresolved, so this range is deliberately not given a typed array. */
    u8 state_and_handle_view[0xe4];
    RecordNotify notify_state5;  /* +0x14c */
    void *state5_context;        /* +0x150 */
    RecordNotify notify_state6;  /* +0x154 */
    void *state6_context;        /* +0x158 */
    u8 unknown_15c_to_18f[0x34];
    ByteBuffer framed_output;    /* +0x190 */
    ByteBuffer mode2_input;      /* +0x19c */
    ByteBuffer sibling_input;    /* +0x1a8 */
    ByteBuffer mode1_input;      /* +0x1b4 */
    /* The object continues: downstream command staging uses +0x1a5bc. */
} ControllerRuntime;

extern ControllerRuntime *D_08a20fec;
extern ByteBuffer D_08a20ff0;
extern void FUN_088ebb10(void *destination, s32 value, unsigned size);
extern void FUN_088ebb18(void *destination, const void *source, unsigned size);
extern void FUN_08826d60(ControllerRuntime *runtime, unsigned index,
                          unsigned state);
extern void FUN_0880d5bc();

/*
 * Recovered boundary: the initializer establishes the custom runtime buffer
 * family later used by FUN_08826e50, FUN_088271ac, and FUN_08827824.  These
 * views each use {used, capacity, data}; modes 2 and 1 supply +0x19c and
 * +0x1b4 respectively to FUN_088271ac.  D_08a20ff0 is the related shared
 * input view.  The exact allocation/source objects, clear spans, record-loop
 * bounds, and one-copy payload are not independently recovered, so no body
 * is claimed here.
 */
