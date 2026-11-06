/*
 * Purpose: partial recovery of a private large-record state dispatcher.
 *
 * The 640-byte target calls the local state reset/query helpers at 0882a34c
 * through 0882a3f8, compares five record tags through FUN_0889f790, and
 * consults two wider-record accessors.  This distinguishes it from the
 * controller runtime: there is no recovered D_08a20fec use or controller
 * buffer dependency in this target inventory.
 *
 * No complete function body is claimed.  The formal ABI, callers, branch
 * predicates, and relation between its two observed record bases are not
 * recovered; this file is intentionally uncompiled.
 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef int s32;

typedef struct StateRecordView {
    u8 unknown_000_to_c89[0xc8a];
    u8 field_c8a;                /* observed through one derived base */
    u8 unknown_c8b_to_cd9[0x4f];
    u8 field_cda;                /* reset helper owns this byte */
} StateRecordView;

typedef struct SmallRecordView {
    u8 unknown_000_to_61[0x62];
    u8 field_62;
    u8 unknown_63_to_d5[0x73];
    u8 field_d6;
} SmallRecordView;

extern void FUN_0882a34c(void *record, u8 first, s32 second, u8 third);
extern s32 FUN_0882a360(void *record);
extern void FUN_0882a374(void *record);
extern s32 FUN_0882a3ac(const void *record);
extern u8 FUN_0882a3f8(void *record);
extern s32 FUN_0889f790(u8 *record, u8 first, u16 second);
extern s32 FUN_088bcd54(void *record);
extern u8 FUN_088cca4c(void *record);

/*
 * Supported symbolic order: the target first obtains the +0x21c0 and
 * +0x9a31 accessor values, performs two tag comparisons, queries three state
 * helpers, performs reset/store work, then performs three more tag
 * comparisons.  Branches combine those results before issuing one or more
 * resets.
 * The state helper family shows that +0xc8e/+0xc8f, +0xcda/+0xcdb,
 * +0xc34/+0xc38, +0xddc/+0xde0, and +0xe0a are related state storage. Nearby
 * helpers use +0xc34 as a gated 16-bit value and +0xcda as an alternate-mode
 * indicator. The observed target bases also use +0x62, +0xd6, and +0xcda.
 * Their precise ownership and member types remain unknown, so these views are
 * evidence scaffolding rather than a complete object definition.
 */
