/*
 * FUN_088dbaa8: refresh word 8 of one 36-byte entry from its attached object.
 *
 * Main EBOOT, G2 high-address slice. The entry layout and function roles are hypotheses.
 */

typedef unsigned char u8;
typedef unsigned int u32;

struct Entry_088dbaa8
{
    void *object;
    u32 unknown_04;
    u32 value_08;
    u8 unknown_0c[0x18];
};

void FUN_088ed334(void *object);
u32 FUN_088ed594(void *object);

void FUN_088dbaa8(struct Entry_088dbaa8 *entries, int index)
{
    struct Entry_088dbaa8 *entry = &entries[index];

    FUN_088ed334(entry->object);
    entry->value_08 = FUN_088ed594(entry->object);
}
