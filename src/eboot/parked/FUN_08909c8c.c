/* FUN_08909c8c: update a four-way menu selection and its active panel.
 * Main EBOOT, attempt-high-01 513-1024 byte batch 4. Menu roles are hypotheses. */
typedef unsigned char u8;
typedef unsigned int u32;
extern u8 DAT_09beb0d4;
extern u32 _DAT_09bb7a70;
extern int _DAT_09bb7e78;
int FUN_08906550(void); u32 FUN_0883bd58(void);
void FUN_0890899c(); void FUN_08902be4(); void FUN_088fb378();
void FUN_088c926c(); void FUN_089029f4();

void FUN_08909c8c(int context, short mode)
{
    u32 input;
    u8 old_selection;
    u8 selection;
    if (FUN_08906550() == 0) {
        FUN_0890899c(DAT_09beb0d4);
        return;
    }
    FUN_08902be4(0x09beb388, 0);
    input = FUN_0883bd58();
    if (mode == 0) {
        if (input & 0x300) {
            old_selection = DAT_09beb0d4;
            selection = old_selection;
            if (_DAT_09bb7a70 & 0x100) {
                selection = old_selection == 0 ? 3 : old_selection - 1;
            } else if (_DAT_09bb7a70 & 0x200) {
                selection = old_selection < 3 ? old_selection + 1 : 0;
            }
            if (selection != old_selection) {
                DAT_09beb0d4 = selection;
            }
            FUN_088fb378(0x09beb0d8, (input & 0x100) ? 0 : 1, 1);
            FUN_088c926c(_DAT_09bb7e78, 0, 5, 0, 5, -1, -1, 0, 0, 0);
        }
        FUN_089029f4(0x09beb0d8);
    } else if (mode == 1) {
        old_selection = DAT_09beb0d4;
        selection = old_selection;
        if (_DAT_09bb7a70 & 0x80) {
            selection = old_selection == 0 ? 3 : old_selection - 1;
        } else if (_DAT_09bb7a70 & 0x20) {
            selection = old_selection < 3 ? old_selection + 1 : 0;
        }
        if (selection != old_selection) {
            DAT_09beb0d4 = selection;
        }
        if (input & 0xa0) {
            FUN_088fb378(0x09beb230, (input & 0x80) ? 0 : 1, 1);
            FUN_088c926c(_DAT_09bb7e78, 0, 0x20, 0, 5, -1, -1, 0, 0, 0);
        }
        FUN_089029f4(0x09beb230);
    }
}
