/* FUN_08904cec: configure and draw a selectable item plus optional quantity text.
 * Main EBOOT, attempt-high-01 513-1024 byte batch 2. Record roles are hypotheses. */
typedef unsigned char u8;
typedef unsigned int u32;
extern void *PTR_DAT_089fcc9c[], *PTR_DAT_089fccac[];
extern int PTR_LAB_0896a8c0, PTR_LAB_0896b368;
extern int _DAT_08aace80;
void FUN_0890172c(); void FUN_0890112c(); void FUN_088fff0c();
void FUN_08904570(); void FUN_0880e1d4();
int FUN_08867d40(int, int);

void FUN_08904cec(int manager, int layout, int item, int style, int image,
                  int quantity_style, int quantity, u32 side, u8 flags)
{
    void *primary_callback[4];
    void *text_callback;
    char *text;
    char width, height;
    u8 mode;
    int text_flags;
    u8 reserved;
    char buffer[44];
    int y;
    int saved_style = quantity_style;
    int saved_quantity = quantity;
    void **table = (flags & 1) ? PTR_DAT_089fccac : PTR_DAT_089fcc9c;

    if ((flags & 8) == 0 && item != 0xff) {
        short *record = (short *)table[(side & 0xff) ^ 1];
        short x = *(short *)(layout + 0x18);
        y = *(short *)(layout + 0x1a);
        FUN_0890172c(primary_callback, item, style, 0,
                     (short)(record[2] - record[0]), (short)(record[3] - record[1]), 1);
        *(void ***)(record + 0x10) = primary_callback;
        FUN_0890112c(manager, record, (flags & 2) ? manager + 0xc00 : 0,
                     0, x, y, 0);
        if (flags & 2) {
            FUN_088fff0c(manager + 0xc30, layout, 0, 0, 0);
        }
        primary_callback[0] = &PTR_LAB_0896a8c0;
    }
    FUN_08904570(manager, table[2], image, saved_style, layout, 0, 0, 0, 0);
    if ((flags & 0x10) == 0) {
        short *record;
        int resource = FUN_08867d40(_DAT_08aace80, (flags & 4) ? 0x27 : 0x25);
        FUN_0880e1d4(buffer, resource, saved_quantity);
        record = (short *)table[3];
        width = (char)record[2] - (char)record[0];
        height = (char)record[3] - (char)record[1];
        mode = (u8)saved_style;
        reserved = 0;
        *(void ***)(record + 0x10) = &text_callback;
        text_callback = &PTR_LAB_0896b368;
        text_flags = 0;
        text = buffer;
        FUN_0890112c(manager, record, layout, 0, 0, 0, 0);
    }
}
