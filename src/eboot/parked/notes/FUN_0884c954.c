/*
 * FUN_0884c954 partial initialization-flow recovery.
 *
 * Artificial-state probing confirms three sequential field-setter calls on
 * D_09be9f18 with fixed byte inputs. It also confirms a call to the parked
 * descriptor submitter with D_09beb0bc and a fixed ten-element descriptor
 * region. No direct caller or callback-table owner is yet established, and
 * the submitter ABI is explicitly incomplete, so this is an uncompiled view.
 */
typedef unsigned char u8;
typedef int s32;

extern void *D_09be9f18;
extern void *D_09beb0bc;

void FUN_088e6ff0(void *record, u8 first, s32 second);
void FUN_088e7048(void *record, u8 value);
void FUN_088e7054(void *record, u8 value);
void FUN_08901000(void);

/* Observed prefix: 6ff0(record, 14, 14); 7048(record, 0); 7054(record, 16). */
