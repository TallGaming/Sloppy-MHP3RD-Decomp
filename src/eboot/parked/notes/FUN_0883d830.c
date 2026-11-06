/* Purpose: uncompiled ABI field view for the multi-callee record operation. */
typedef struct FUN_0883d830_record FUN_0883d830_record;

/*
 * The only declared view supported by current target and caller evidence is
 * intentionally incomplete.  FUN_0883dc9c reaches this target twice.  The
 * target has direct call paths to FUN_0885f610, FUN_0885be6c (twice), and
 * FUN_088a7a98.  FUN_0885f610 is a provisional scalar classifier and
 * FUN_0885be6c has a partial read-only object contract; FUN_088a7a98 has no
 * verified callable contract.  Two target-local direct transfers also land
 * inside the target interval.  In both observed caller sites the result lane
 * is redefined before a classified consumer appears.
 *
 * No complete parameter or return type follows from this evidence.  This
 * file deliberately declares no callable candidate and is not compiled.
 */
unsigned int FUN_0883d830(void *unknown_lane1,
                           FUN_0883d830_record *unknown_lane2);
