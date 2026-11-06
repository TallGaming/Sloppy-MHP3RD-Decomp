/*
 * FUN_0890112c: pack six arguments into a temporary request and submit it.
 *
 * The field meanings and signedness are hypotheses.  The observed layout is
 * represented directly until callers establish a shared structure type.
 */
typedef unsigned int u32;
typedef signed short s16;

struct Request0890112c {
    u32 word0;
    u32 word4;
    u32 word8;
    u32 wordc;
    s16 half10;
    s16 half12;
};

extern void FUN_08900b7c(void *owner, struct Request0890112c *request);

void FUN_0890112c(void *owner, u32 word0, u32 word4, u32 wordc,
                  s16 half10, s16 half12, u32 word8)
{
    struct Request0890112c request;

    request.word0 = word0;
    /* Matching shape: this order reproduces the original independent stores. */
    request.wordc = wordc;
    request.half10 = half10;
    request.half12 = half12;
    request.word8 = word8;
    request.word4 = word4;
    FUN_08900b7c(owner, &request);
}
