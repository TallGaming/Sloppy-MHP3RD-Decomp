/*
 * Purpose: convert an integer duration into another integer time unit.
 * Hypothesis: the first input is unused and the conversion is frames to
 * milliseconds at 60 frames per second.
 *
 * Attempt 1: the readable conversion matches every operation and register
 * choice. The two float constants compile into this object's local constants,
 * while the reference loads global data at 0x089681a4 and 0x089681a8.
 *
 * Blocker: those two reference data locations have no recovered symbols.
 * Revisit after data-symbol recovery.
 */
int FUN_088c4a54(int unused, int frames) {
    return (int)(((float)frames / 60.0f) * 1000.0f);
}
