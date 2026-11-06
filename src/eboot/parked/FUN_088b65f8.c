/*
 * Purpose: dispatch to an overlay routine when the second input is present.
 * Hypothesis: the destination is code in a separately loaded overlay.
 *
 * Attempt 1: this natural source matches every non-relocation instruction.
 * The remaining jump cannot be checked or linked because the split has no
 * symbol for the overlay destination.
 *
 * Blocker: overlay target 0x09d10af0 is outside the main-EBOOT symbol set.
 * Revisit when the overlay is split and exposes an import/export symbol.
 */
extern void FUN_09d10af0();

void FUN_088b65f8(void *unused, void *overlay_argument) {
    if (overlay_argument != 0) {
        FUN_09d10af0(overlay_argument);
    }
}
