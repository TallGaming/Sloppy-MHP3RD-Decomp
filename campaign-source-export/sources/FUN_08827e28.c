/*
 * Purpose: consume controller input, refresh its selected handle, and route
 * accepted spans into the runtime's framed command buffer.
 *
 * This is an intentionally uncompiled recovery artifact.  The target is a
 * 1,996-byte custom controller; the declarations below record only contracts
 * supported by callers, its callees, and the recovered field accesses.  They
 * are not a whole-function matching candidate.
 */
typedef unsigned char u8;
typedef int s32;

typedef struct ByteBuffer {
    s32 used;
    s32 capacity;
    u8 *data;
} ByteBuffer;

typedef struct Controller {
    u8 unknown_00_to_21[0x22];
    u8 record_count;             /* +0x22 */
    u8 selected_record;          /* +0x23 */
    u8 unknown_24_to_127[0x104];
    s32 error_kind;              /* +0x128 */
    u8 unknown_12c_to_12f[4];
    s32 required_size;           /* +0x130 */
    u8 unknown_134_to_d9[0xd9 - 0x134];
    u8 resolver_result;          /* +0xda */
} Controller;

extern Controller *D_08a20fec;
extern ByteBuffer D_08a20ff0;
/* These two target callees have no independently recovered target-side ABI. */
extern s32 FUN_088270a8();
extern void FUN_08826d60(Controller *owner, unsigned index,
                          unsigned new_state);
extern s32 FUN_08826fa4();
extern s32 FUN_08826f6c(Controller *owner, s32 code, s32 required);
extern u8 FUN_08826f90(void);
extern s32 FUN_0880bff4(const void *left, const void *right, unsigned size);
extern void FUN_0880c1ac(void *destination, const void *source, unsigned size);
extern void FUN_088ebb18(void *destination, const void *source, unsigned size);
extern s32 FUN_0887ab14(void);
extern s32 FUN_0887ae64(void);
extern s32 FUN_0887c498(void);

/*
 * Recovered whole-function contract:
 *
 * int FUN_08827e28(Controller *owner, ByteBuffer *input, u8 mode);
 *
 * Callers pass the runtime object as owner and runtime+0x19c with mode 2 or
 * runtime+0x1b4 with mode 1.  The routine refreshes the selected controller
 * handle through FUN_088270a8, evaluates record/timing gates, then consumes
 * accepted input spans.  Shared-input spans are framed as kind 3; spans from
 * input are framed as kind 2.  It returns the consumed count for the a1
 * buffer path, including zero when no frame is accepted.
 *
 * FUN_08826d60 is a recovered per-record state transition helper; it records
 * byte state at owner+0x68+index and dispatches transition callbacks.  The
 * target's two calls to it make the record-state branch graph material to
 * matching.  FUN_08826f6c also clears the runtime words at +0x190 and +0x1a8
 * after recording its local status, so it couples controller errors to two
 * sibling byte-buffer views.  Exact C is blocked by unresolved call-site
 * ABIs for FUN_0887ab14, FUN_0887ae64, and FUN_0887c498, plus untyped
 * scratch-state ownership.  Do not compile this partial declaration as a
 * substitute for the target.
 */
