/*
 * Purpose: retain the recovered local command-frame shape and call flow.
 *
 * FUN_0885ae18 writes a seven-word local frame, with byte and halfword field
 * updates, then calls the verified code-0x10000002 wrapper FUN_0885ae08. Four
 * conditional paths select the narrow field updates. Field names and source
 * ownership remain unresolved, so this is an uncompiled ABI view only.
 */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;

struct AudioControlFrame {
    u32 word[7];
};

extern void FUN_0885ae08(struct AudioControlFrame *frame);
