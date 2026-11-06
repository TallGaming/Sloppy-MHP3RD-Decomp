/*
 * FUN_0884e700 field view.
 *
 * This records the EABI signature supported by two observed game callers.
 * The first caller supplies a UI manager, selected value, mode, context,
 * flags, table address, signed cursor, and item count.  The target has
 * several conditional paths and unresolved outgoing callee contracts, so
 * this is intentionally an uncompiled partial view rather than a candidate.
 */
typedef struct UiManager UiManager;
typedef struct EntryTable EntryTable;

void FUN_0884e700(UiManager *manager, int selected_value, int mode,
                  int context, int flags, EntryTable *table,
                  int cursor, int item_count);
