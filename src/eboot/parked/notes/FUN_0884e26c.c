/*
 * Purpose: retain the current boundary evidence for FUN_0884e26c.
 *
 * The only direct caller is the still-active FUN_0884e700 recovery.  The
 * target makes 23 direct dependency edges, including descriptor-mode
 * wrappers that write a record byte and dispatch a selected mode.  The entry
 * layout, all call argument lanes, and the shared record ownership are not
 * yet established.  Artificial input coverage also reaches an unnamed
 * external control destination on every nontrivial path.  This intentionally
 * uncompiled field view is not a whole-function candidate.
 */
typedef struct RenderRecord RenderRecord;

/* The formal parameters remain unresolved until the caller is recovered. */
void FUN_0884e26c(RenderRecord *record);
