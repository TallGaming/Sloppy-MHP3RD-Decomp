/*
 * FUN_08907b74: clear one byte in an indexed global work area.
 *
 * The global base and cleared field meaning are hypotheses.
 */
typedef unsigned char u8;
typedef unsigned int u32;

extern u8 *volatile D_08aace80;
extern int FUN_0890642c(void);

void FUN_08907b74(void)
{
    u8 *base = D_08aace80;
    u8 *entry;

    entry = (u8 *)(FUN_0890642c() + (u32)base);
    entry[0x5eabe] = 0;
}
