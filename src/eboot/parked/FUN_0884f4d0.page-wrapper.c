/* Submit a page's temporary resource descriptor, then tick and draw its page state. */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;

struct PageOwner0884f4d0 {
    u8 prefix[0x14d0];
    u8 page_state[1];
};

struct PageCoordinates0884f4d0 {
    u8 prefix[0x18];
    s16 x;
    s16 y;
};

struct PageDescriptors0884f4d0 {
    u8 batch[0x8c];
    const void *first;
    u8 before_second[0xb0 - 0x90];
    const void *second;
    u8 before_panel[0x144 - 0xb4];
    u8 panel[0x24];
    u16 record[0x12];
};

extern void *D_09beb0bc;
extern struct PageDescriptors0884f4d0 D_08974e68;
extern const u8 D_0896b3f8[];

extern void FUN_08900bf0(void *manager, const void *entries, const void *payload,
                         int count, int word, s16 x, s16 y, int flags);
extern void FUN_08904570(void *manager, u16 *record, int value, u8 mode,
                         const void *payload, s16 x, s16 y, int flags, u8 stack_mode);
extern void FUN_089029f4(void *state);
extern void FUN_08900c98(void *state, u16 page, u16 count, void *panel, s16 x, s16 y);

void FUN_0884f4d0(struct PageOwner0884f4d0 *owner, int value, u8 page, u8 count,
                  const struct PageCoordinates0884f4d0 *coordinates)
{
    const void *resource;

    resource = D_0896b3f8;
    D_08974e68.second = &resource;
    D_08974e68.first = &resource;
    FUN_08900bf0(D_09beb0bc, D_08974e68.batch, coordinates, 9, 0, 0, 0, 0);
    FUN_08904570(D_09beb0bc, D_08974e68.record, value, 11, coordinates, 0, 0, 0, 0);
    FUN_089029f4(owner->page_state);
    FUN_08900c98(owner->page_state, page, count, D_08974e68.panel, coordinates->x, coordinates->y);
}

