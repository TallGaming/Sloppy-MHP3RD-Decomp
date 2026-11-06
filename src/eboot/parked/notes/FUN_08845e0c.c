/*
 * Purpose: retain the caller-supported ABI and leaf-function observations.
 *
 * FUN_08928070 stores this byte result at its menu-state offset 0x16f3 after
 * passing its selected context as the second input.  Artificial probes show
 * no first-input effect, selector-dependent lookup addressing, no stores,
 * and a byte return.  A mutable descriptor-region pointer changes both the
 * traversal and return value.  The pointed-to type and return-field meaning
 * remain unproved, so this is an uncompiled field view, not a C candidate.
 */
typedef unsigned char u8;

typedef struct MenuState MenuState;

/* The first argument is preserved pending confirmation despite no probe effect. */
u8 FUN_08845e0c(MenuState *menu, int selected_context);
