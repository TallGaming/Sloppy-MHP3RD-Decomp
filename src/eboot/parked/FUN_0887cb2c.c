/* Purpose: reconcile a fixed peer table with identifiers in a linked list. */
typedef struct PeerSlot {
    unsigned char id[16];
    int active;
    short used;
    unsigned short marker;
} PeerSlot;

typedef struct PeerNode {
    struct PeerNode *next;
    unsigned char padding[128];
    unsigned char id[6];
} PeerNode;

extern PeerSlot D_08aad3f4[15];
extern int FUN_0880bff4(const void *, const void *, int);
extern void FUN_0880c088(void *, const void *, int);

int FUN_0887cb2c(PeerNode *head, int enabled)
{
    PeerNode *node;
    PeerSlot *slot;
    int i;

    if (enabled != 0 && head != 0) {
        node = head;
        do {
            slot = D_08aad3f4;
            i = 1;
            do {
                if (slot->used != 0 && FUN_0880bff4(slot, node->id, 6) == 0)
                    break;
                slot++;
                i++;
            } while (i != 16);

            if (i == 16) {
                slot = D_08aad3f4;
                i = 1;
                while (slot->used != 0 && i != 15) {
                    slot++;
                    i++;
                }
                if (i != 15) {
                    FUN_0880c088(slot, node->id, 6);
                    slot->marker = 0xaaaa;
                    slot->active = 1;
                    slot->used = 1;
                }
            }
            node = node->next;
        } while (node != 0);
    }

    slot = D_08aad3f4;
    i = 1;
    do {
        if (slot->used != 0) {
            node = head;
            if (enabled != 0 && node != 0) {
                do {
                    if (FUN_0880bff4(slot, node->id, 6) == 0)
                        break;
                    node = node->next;
                } while (node != 0);
            }
            if (enabled == 0 || head == 0 || node == 0)
                slot->used = 0;
        }
        slot++;
        i++;
    } while (i != 16);
    return 0;
}
