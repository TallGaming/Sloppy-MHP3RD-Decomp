/*
 * FUN_0889a6e0: count queued records matching a key and selection mode.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: code shape matches except for one local-control relocation encoding.
 */

typedef unsigned char u8;

typedef struct Item {
    int type;
    u8 reserved[16];
    u8 key_data[1];
} Item;

int FUN_0889a074(void);
Item *FUN_088997d8(void);
Item *FUN_0889980c(void);
int FUN_0889a174(void *key_data, void *key, int context);

int FUN_0889a6e0(void *key, int mode)
{
    int count = 0;
    int context = FUN_0889a074();
    Item *item = FUN_088997d8();

    for (;;) {
        if (item == 0) {
            return count;
        }
        if (FUN_0889a174(item->key_data, key, context) != 0) {
            if (mode == 0) {
                count++;
            } else if (mode == 1) {
                count += (unsigned int)(item->type - 1) < 2;
            }
        }
        item = FUN_0889980c();
    }
}
