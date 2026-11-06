/*
 * FUN_088a604c: copy 96 bytes from slot 0 (FUN_0886cae0) into 0x5014 of D_08aace80's record.
 *
 * Main EBOOT, match slice 11 (small functions with a frame, no branches, part 3). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern u8 * D_08aace80; /* Hypothesis: type from the access only. */
void FUN_088ebb18(void *dst, const void *src, u32 size); /* Hypothesis: memcpy-like */
void *FUN_0886cae0(void *rec, s32 index);

void FUN_088a604c(void)
{
    u8 *rec = D_08aace80;

    FUN_088ebb18(rec + 0x5014, FUN_0886cae0(rec, 0), 96);
}
