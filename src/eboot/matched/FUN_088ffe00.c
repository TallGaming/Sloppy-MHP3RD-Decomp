/*
 * FUN_088ffe00: submit a structured request with default sentinel arguments.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 */

typedef unsigned char u8;
typedef short s16;
typedef unsigned int u32;

extern void *D_09beb0bc;
void FUN_088ff8f0(void *, u32, u32, int, int, int, u32, int, int, int);

void FUN_088ffe00(void *unused, u32 *request)
{
    FUN_088ff8f0(D_09beb0bc, request[0], request[1], 4,
        *(s16 *)((u8 *)request + 0x10),
        *(s16 *)((u8 *)request + 0x12),
        request[2], -1, -1, 0);
}
