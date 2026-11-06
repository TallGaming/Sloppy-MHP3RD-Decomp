/*
 * Purpose: record independently corroborated whole-flow facts pending an exact
 * natural-source shape for FUN_0883d5a4.
 *
 * The target reads only input byte 1 before its first dependency call. Across
 * artificial return values 0, 1, and -1 for FUN_0885f610, a zero result makes
 * exactly two further calls (FUN_0885be6c then FUN_0883d558) and propagates the counter result;
 * either nonzero result returns 0 without those calls. The third argument at
 * the registered counter call is the classifier-success value zero, and its
 * return value propagates on the success path. The status lifetime across the
 * descriptor call is therefore material. The three checked natural sources
 * predated this return-flow probe and remain nonmatching (best size 144/224).
 */

typedef unsigned char u8;
typedef unsigned int u32;

extern void *D_08a3345c;
extern int FUN_0885f610(void *unused_context, u32 value);
extern unsigned short FUN_0885be6c(void *unused_context, const void *input);
extern int FUN_0883d558(u32 unused, u32 value, int count);

/* Not compiled: this preserves dataflow, not a claimed source reconstruction. */
