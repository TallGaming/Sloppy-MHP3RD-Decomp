/* FUN_089045f8: draw a framed page, navigation markers, and its numeric label.
 * Main EBOOT, attempt-high-01 513-1024 byte batch 2. UI roles are hypotheses. */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

extern void *DAT_089f9280, *DAT_089f92ec, *DAT_089f9310;
extern void *PTR_DAT_089fcc90;
extern int PTR_LAB_0896b3f8, PTR_DAT_089fcc8c, DAT_089f9434;
extern int DAT_0896985c;
extern u8 DAT_089f9458, DAT_089f945a, DAT_089f945c, DAT_089f945e;
extern int _DAT_08aace80, _DAT_09e5e1a8, _DAT_09beb0bc, _DAT_09be9f18;
int FUN_08867d40(int, int);
int func_0x09c9aba0(int, int);
void FUN_08900fc0(); void FUN_08904570(); void FUN_0890000c();
void FUN_088e6ff0(); void FUN_0880e1d4();

void FUN_089045f8(u32 *page, u16 number, u16 total, void *layout, short x, short y)
{
    void *callback;
    char text[44];
    int resource;

    DAT_089f9280 = &callback;
    callback = &PTR_LAB_0896b3f8;
    DAT_089f92ec = DAT_089f9280;
    DAT_089f9310 = DAT_089f9280;
    if (page[0] == 0) {
        resource = FUN_08867d40(_DAT_08aace80, 4);
    } else if (page[0] == 1) {
        resource = func_0x09c9aba0(_DAT_09e5e1a8, 0xd4);
    }
    PTR_DAT_089fcc90 = layout;
    FUN_08900fc0(_DAT_09beb0bc, &PTR_DAT_089fcc8c, 0, x, y);
    FUN_08904570(_DAT_09beb0bc, &DAT_089f9434, resource, 0x19, layout, x, y, 1, 0);
    if (page[2] == 0 && page[0] < 2) {
        if (number < total) {
            FUN_0890000c(page + 0x2c, layout, x, y);
            if (((u8 *)page)[0xd] & 1) {
                FUN_0890000c(page + 4, layout, x, y);
            }
        }
        if (number > 1) {
            FUN_0890000c(page + 0x40, layout, x, y);
            if (((u8 *)page)[0xd] & 2) {
                FUN_0890000c(page + 0x18, layout, x, y);
            }
        }
    }
    FUN_088e6ff0(_DAT_09be9f18,
                  (DAT_089f945c - DAT_089f9458) & 0xff,
                  (DAT_089f945e - DAT_089f945a) & 0xff);
    FUN_0880e1d4(text, &DAT_0896985c, number);
    FUN_08904570(_DAT_09beb0bc, &DAT_089f9458, text, (signed char)page[3],
                  layout, x, y, 1, 0);
}
