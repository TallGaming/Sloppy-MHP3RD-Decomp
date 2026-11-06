/*
 * Purpose: initialize the default source record used by the adjacent
 * session/selection-state copy path.
 *
 * UNCOMPILED FIELD LEDGER ONLY.  This leaf function has no direct calls and
 * only one direct caller, FUN_0882af30.  Its reachable call path forwards all
 * four incoming argument registers unchanged; this target itself consumes
 * only the first state-pointer argument.  The parked caller draft describes a
 * null-path initialization, but this target immediately writes through the
 * pointer read at state +0xe0c and has no null guard.  Therefore that draft's
 * branch relation is not sufficient ownership evidence and is deliberately
 * not copied here.  The target's allocation/ownership mechanism and the
 * provenance of its constant float table are not recovered.  Do not compile,
 * register, or treat this as a whole-function candidate.
 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef float f32;

/* Target store ledger relative to the pointer observed at state +0xe0c.
 * Half words: 0x00, 0x02, 0x04, 0x06, 0x08, 0x0a, 0x5c, 0x5e.
 * Bytes: 0x30 through 0x35.  Integer words: 0x0c..0x28, 0x48, 0x4c,
 * 0x54, 0x58, 0x70, 0x90, 0xd0, 0xf0.  Float words include 0x38..0x44
 * and extend to 0x108.  Widths and offsets are established; names and
 * values are intentionally not guessed.
 */
struct DefaultSource_0882ad90 {
    u16 half_00;
    u16 half_02;
    u16 half_04;
    u16 half_06;
    u16 half_08;
    u16 half_0a;
    u32 word_0c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u8 unknown_2c[4];
    u8 initialized_30_to_108[0xd8];
};

struct State_0882ad90 {
    u8 unknown_000[0xe0c];
    struct DefaultSource_0882ad90 *source_e0c;
};

/* Provisional only: the single recovered caller supplies one state pointer.
 * Return type is void at the target's sole return site. */
extern void FUN_0882ad90(struct State_0882ad90 *state);
