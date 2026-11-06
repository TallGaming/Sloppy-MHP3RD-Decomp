/* FUN_08904f78: populate six related item slots and attach their text callbacks.
 * Main EBOOT, attempt-high-01 513-1024 byte batch 2. Slot roles are hypotheses. */
typedef unsigned char u8;
typedef unsigned int u32;
extern int PTR_LAB_0896b410, PTR_LAB_0896b368;
extern u8 DAT_089fccd0[], DAT_089fccd1[];
extern signed char DAT_089fccbc[], DAT_089fccbd[], DAT_089fccbe[], DAT_089fccbf[];
void FUN_0890112c(); void FUN_088fb044();
int FUN_088fb80c(int, int);

void FUN_08904f78(int manager, int group, int item, int style, short x, short y,
                  u32 first_icon, u32 second_icon)
{
    void *icon_callback[4];
    void *text_callback;
    int text_style = style;
    char width, height;
    u8 text_mode;
    int text_flags;
    u8 reserved;
    int i;
    int base;
    short *text_record;

    icon_callback[0] = &PTR_LAB_0896b410;
    base = manager + 0x6e0;
    if (group != 2) {
        base = manager + 0x960;
        if (group != 4) {
            base = manager + 400;
            if (group == 1) {
                base = manager + 0x4b0;
            }
        }
    }
    text_mode = DAT_089fccd0[item * 2];
    *(u8 *)(base + 0x122) = text_mode;
    *(u8 *)(base + 0x172) = text_mode;
    *(u8 *)(base + 0x1c2) = text_mode;
    for (i = 0; i < 6; i++) {
        FUN_0890112c(manager, base + 0x20 + i * 0x50, 0, 0, x, y, 0);
    }
    group *= 4;
    if (first_icon != 0xff && DAT_089fccbd[group] != -1 && DAT_089fccbe[group] != -1) {
        int record_address = base + DAT_089fccbe[group] * 0x50;
        short *record = (short *)(record_address + 0x20);
        *(void ***)(record_address + 0x40) = icon_callback;
        FUN_088fb044(icon_callback, first_icon & 0xff, 0, FUN_088fb80c(record_address + 0x20, 0),
                     (short)(record[2] - record[0]), (short)(record[3] - record[1]), 1, 0);
        FUN_0890112c(manager, record_address + 0x20, 0, 0, x, y, 0);
        if (second_icon != 0xff && DAT_089fccbf[group] != -1) {
            record_address = base + DAT_089fccbf[group] * 0x50;
            record = (short *)(record_address + 0x20);
            *(void ***)(record_address + 0x40) = icon_callback;
            FUN_088fb044(icon_callback, second_icon & 0xff, 0,
                         FUN_088fb80c(record_address + 0x20, 0),
                         (short)(record[2] - record[0]), (short)(record[3] - record[1]), 1, 0);
            FUN_0890112c(manager, record_address + 0x20, 0, 0, x, y, 0);
            text_flags = 1;
            text_record = (short *)(base + DAT_089fccbc[group] * 0x50 + 0x20);
        } else {
            text_flags = 0;
            text_record = (short *)(base + DAT_089fccbd[group] * 0x50 + 0x20);
        }
    } else {
        text_flags = 1;
        text_record = (short *)(base + DAT_089fccbc[group] * 0x50 + 0x20);
    }
    width = (char)text_record[2] - (char)text_record[0];
    height = (char)text_record[3] - (char)text_record[1];
    reserved = 0;
    *(void ***)(text_record + 0x10) = &text_callback;
    text_callback = &PTR_LAB_0896b368;
    FUN_0890112c(manager, text_record, 0, 0, x, y, 0);
}
