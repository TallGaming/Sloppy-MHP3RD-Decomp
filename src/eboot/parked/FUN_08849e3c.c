/* Purpose: coordinator dependency and record-operation view; not a candidate. */
#include <stdint.h>

typedef struct {
    int32_t field_4c;
} Record089;

/* These established calls are observed in a synthetic zero-state traversal. */
extern void FUN_08867d40(void *record, uint16_t value);
extern void FUN_088f9cd0(Record089 *record);
extern void FUN_0890112c(void *owner, uint32_t a, uint32_t b, uint32_t c,
                         int16_t d, int16_t e, uint32_t f);
extern void FUN_0890172c(void **object, uint8_t a, int8_t b, int32_t c,
                         int16_t d, int16_t e, int8_t f);

/*
 * FUN_08849e3c is a 665-word coordinator with 15 direct dependencies.  It
 * repeatedly invokes the record slot writer and reaches request and settings
 * helpers on the synthetic zero-state path.  Nine dependencies remain PARKED;
 * their caller argument and result contracts prevent a whole C body here.
 */
void FUN_08849e3c_partial(void)
{
    /* Coordinator state is global/derived rather than supplied by an ABI lane. */
}
