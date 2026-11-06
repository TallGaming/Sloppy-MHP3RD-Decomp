/* Append the selected render-mode commands to the active packet stream. */
typedef unsigned int u32;

struct RenderOwner088fa038 {
    unsigned char prefix[0xcb0];
    int packet_index;
};

extern void *D_08aaceb8;
extern int FUN_0887585c(void *state);
extern void FUN_088756e8(void *state, u32 cursor, int words, int packet_index);
extern void FUN_08875870(void *state, int cursor);

void FUN_088fa038(struct RenderOwner088fa038 *owner, u32 flags)
{
    u32 *packet = (u32 *)FUN_0887585c(D_08aaceb8);

    packet[0] = (0xc6u << 24) | ((flags & 1) ? 0x101 : 0);
    if (flags & 6) {
        packet[1] = (0xc7u << 24) | ((flags & 2) ? 0 : 0x101);
        packet[2] = 0x10u << 24;
        packet[3] = 0x08u << 24;
        FUN_088756e8(D_08aaceb8, (u32)packet, 4, owner->packet_index);
        FUN_08875870(D_08aaceb8, (int)(packet + 4));
    } else {
        packet[1] = 0x10u << 24;
        packet[2] = 0x08u << 24;
        FUN_088756e8(D_08aaceb8, (u32)packet, 3, owner->packet_index);
        FUN_08875870(D_08aaceb8, (int)(packet + 3));
    }
}

