/*
 * FUN_088f4ed8: clear the first byte of eight 64-byte entries and two tail bytes.
 *
 * Main EBOOT, G2 high-address branch slice. The array layout is a hypothesis.
 */

typedef unsigned char u8;

void FUN_088f4ed8(u8 *record)
{
    u8 *entry = record;
    int count = 0;

    do {
        count++;
        *entry = 0;
        entry += 0x40;
    } while (count != 8);
    /* Match shape: reverse source order gives the reference's two tail stores. */
    record[0x200] = 0;
    record[0x201] = 0;
}
