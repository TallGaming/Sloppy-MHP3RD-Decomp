/*
 * Partial field view for the menu's two-stage dispatch.
 *
 * The first switch has 17 entries and uses the result of FUN_0884247c.
 * The wrapper passes its first three integer lanes, seventh integer lane,
 * and first incoming stack word to that helper.
 * On first selector zero, the second switch selects from 102 entries using
 * the unsigned byte at offset one of the second incoming pointer.
 * This view leaves the remaining argument types and dependency contracts open.
 */
typedef unsigned char u8;

struct MenuSelector0884e26c {
    u8 unknown;
    u8 selector;
};

