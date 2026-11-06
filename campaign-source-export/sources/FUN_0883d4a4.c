/* Purpose: pass the selected slot-zero table entry to the descriptor dispatcher. */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

extern void *D_08aace80;
extern void *D_09beb0bc;
extern u16 D_0897698c[];
extern int FUN_08867d40(void *manager, u16 index);
extern void FUN_08904570(void *unused_manager, u16 *record, int descriptor_entry,
                         u8 descriptor_mode, int value, short x, short y,
                         int descriptor_kind, u8 stack_flag);

void FUN_0883d4a4(void *record, int value, int mode)
{
    const u8 *bytes = record;
    u8 descriptor_mode = 10;
    int descriptor_entry;

    if (bytes[0x12e3] != 0)
        descriptor_mode = 0;
    descriptor_entry = FUN_08867d40(D_08aace80, (u16)((u32)mode + 590u));
    FUN_08904570(D_09beb0bc, D_0897698c, descriptor_entry, descriptor_mode,
                 value, 0, 0, 1, 0);
}
