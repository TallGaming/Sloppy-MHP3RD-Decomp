/*
 * FUN_08890d08: incomplete field/ABI view for a player-state update helper.
 *
 * The entry has a 560-byte frame and ten direct calls. Its one known caller
 * prepares four integer argument slots; the third is comparison-derived while
 * the fourth is copied from a live value. This is deliberately not a whole
 * callable candidate: register flow, local record construction, the fourth
 * argument's type, and the ownership of the call targets remain unproved.
 */
typedef unsigned char u8;

/* Hypothesis only: the caller's four integer slots have this broad shape. */
struct FUN_08890d08_call_view {
    void *state;
    int selection;
    int selection_is_active;
    void *unknown_context;
};
