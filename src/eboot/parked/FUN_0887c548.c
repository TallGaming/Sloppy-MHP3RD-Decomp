/* Purpose: initialize a compact allocator over caller-provided storage. */
extern int D_08aad344;
extern char S_InetMem[];
extern int FUN_08960b30();
extern void FUN_0880c468();

void FUN_0887c548(int *pool)
{
    int *first;
    int *limit;
    int low;
    int high;

    if (pool[0] < 1 || pool[1] == 0 || pool[2] < 1 || pool[3] == 0 ||
        pool[4] < 2 || *(unsigned short *)(pool + 5) > 1)
        return;

    low = pool[3];
    high = pool[4];
    if (*(unsigned short *)(pool + 5) != 0 && D_08aad344 < 0) {
        D_08aad344 = FUN_08960b30(S_InetMem, 0, 1, 1, 0);
        low = pool[3];
        high = pool[4];
    }

    FUN_0880c468((void *)low, 0, high * 12);
    first = (int *)pool[3];
    first[0] = pool[0];
    pool[6] = (int)first;
    pool[7] = (int)(first + 3);
    first[1] = pool[1] - pool[0];
    first[2] = (int)(first + 3);

    limit = (int *)pool[7];
    limit[0] = pool[0];
    limit[1] = pool[1] + pool[2];
    limit[2] = 0;
    FUN_0880c468((void *)pool[1], 0);
    pool[8] = 0;
    pool[9] = 0;
}
