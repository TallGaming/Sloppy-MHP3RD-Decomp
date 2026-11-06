/*
 * Purpose: count links in a singly linked list.
 * Hypothesis: the next pointer is the first field of each node.
 */
typedef struct ListNode {
    struct ListNode *next;
} ListNode;

int FUN_08830654(const ListNode *node) {
    int count = 0;

    while (node != 0) {
        node = node->next;
        count++;
    }
    return count;
}
