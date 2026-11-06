/*
 * Purpose: create a local command record from shared defaults and dispatch it.
 * Hypothesis: the final word carries the caller's input.
 *
 * Attempt 1: the natural structure copy matches every local record operation
 * and the helper call. GCC creates the stack frame before loading the source;
 * the reference performs its source loads before the frame setup.
 *
 * Blockers: the shared record at 0x08965a14 has no recovered data symbol, and
 * the prologue/load schedule differs. Revisit after data-symbol recovery or
 * with a matching local-record initialization source shape.
 */
typedef unsigned short u16;
typedef unsigned int u32;

typedef struct CommandRecord {
    u32 word[7];
} CommandRecord;

extern CommandRecord D_08965a14;
extern void FUN_0885467c(CommandRecord *record);

void FUN_08854404(u32 input) {
    CommandRecord record = D_08965a14;

    record.word[6] = input;
    *(u16 *)&record.word[0] = 0x100;
    FUN_0885467c(&record);
}
