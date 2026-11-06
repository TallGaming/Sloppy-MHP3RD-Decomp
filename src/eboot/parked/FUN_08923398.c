/*
 * FUN_08923398: report readiness when byte 0xB91 is clear and half-word 0xB9E is nonpositive.
 *
 * Main EBOOT, attempt-high-01 batch 3. The state fields and result meaning are hypotheses.
 */

typedef unsigned char u8;
typedef short s16;

int FUN_08923398(u8 *record)
{
    return record[0xb91] == 0 && *(s16 *)(record + 0xb9e) <= 0;
}
