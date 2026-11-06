/* FUN_08905734: select callbacks for a three-mode message record and render it.
 * Main EBOOT, attempt-high-01 513-1024 byte batch 2. Message roles are hypotheses. */
typedef unsigned int u32;
extern short DAT_089fccd8[], DAT_089fccda[];
extern int PTR_LAB_0896b3f8, PTR_LAB_0896b428, PTR_LAB_0896b368;
extern int _DAT_08aace80, _DAT_09be9f18;
int FUN_08867d40(int, int); int FUN_088e7b60(int, int);
void FUN_08900fc0(); void FUN_0890112c();

void FUN_08905734(int manager, int mode, int *records, int value,
                  int resource_id, signed char variant)
{
    short *record = (short *)(records[0] + DAT_089fccda[mode * 2] * 0x24);
    void *base_callback = &PTR_LAB_0896b3f8;
    void *value_callback = &PTR_LAB_0896b428;
    void *text_callback = &PTR_LAB_0896b368;
    int callback_value = value;
    char width = (char)record[2] - (char)record[0];
    char height = (char)record[3] - (char)record[1];
    unsigned int visible = mode != 2;
    int resource = 0;

    *(void ***)(records[0] + DAT_089fccd8[mode * 2] * 0x24 + 0x20) = &base_callback;
    *(void ***)(record + 0x10) = value == 0 ? &value_callback : &text_callback;
    if (resource_id != -1) {
        resource = FUN_08867d40(_DAT_08aace80, (resource_id + 0x17U) & 0xffff);
    }
    if (mode == 0) {
        *(void ***)(records[0] + 0x188) = resource == 0 ? &value_callback : &text_callback;
    } else if (mode == 1) {
        *(void ***)(records[0] + 0x164) = variant == -1 ? &value_callback : 0;
        *(void ***)(records[0] + 0x1ac) = &value_callback;
        *(void ***)(records[0] + 0x1d0) = &value_callback;
        if (resource != 0) {
            if (value != 0 && FUN_088e7b60(_DAT_09be9f18, value) > 5) {
                *(void ***)(records[0] + 0x1d0) = &text_callback;
            } else {
                *(void ***)(records[0] + 0x1ac) = &text_callback;
            }
        }
    }
    FUN_08900fc0(manager, records, 0, 0, 0);
    if (mode == 2 && resource != 0) {
        short lines = 1;
        if (value != 0) {
            lines = FUN_088e7b60(_DAT_09be9f18, value) + 1;
        }
        *(void ***)(record + 0x10) = &text_callback;
        FUN_0890112c(manager, record, records[1], 0, 0,
                     (short)((record[3] - record[1]) * lines), 0);
    }
}
