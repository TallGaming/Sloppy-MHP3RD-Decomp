/*
 * Purpose: retain the observed two-record ABI and report-frame layout for
 * FUN_0885a0cc. This is an uncompiled partial field view, not a candidate.
 * The sole declared caller prepares two local records and passes their
 * addresses. The target iterates a 0x40-byte file-backed descriptor range
 * beginning at D_08965d3c, reads offsets 0x00..0x18 from both records, and
 * builds one 0x54-byte stack frame before calling the parked reporting
 * dependency FUN_088599f0. In an artificial case, the target passes that
 * frame through its second integer call lane, places second[0..6] at frame
 * offsets 0x08..0x20, and places first[0..6] at offsets 0x24..0x3c. This
 * does not establish the callee's original ABI or the remaining frame fields.
 */
typedef unsigned int u32;

typedef struct FUN_0885a0cc_Record {
    u32 word_00;
    u32 word_04;
    u32 word_08;
    u32 word_0c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
} FUN_0885a0cc_Record;

/* File-backed descriptor range; element layout remains unresolved. */
extern u32 D_08965d3c[];

/* The observed caller passes two pointers and does not consume a result. */
void FUN_0885a0cc(const FUN_0885a0cc_Record *first,
                  const FUN_0885a0cc_Record *second);
