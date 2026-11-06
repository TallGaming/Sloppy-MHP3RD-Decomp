/* Purpose: count successful checks across a table of terminated short-pair lists. */
extern short *PTR_DAT_089e2a90[];
extern int FUN_08866614(int, ...);

int FUN_0886bfc8(int object)
{
    int total = 0;
    int table;

    for (table = 0; table < 11; table++) {
        short *entry = PTR_DAT_089e2a90[table];
        while (entry[0] != 0) {
            total += FUN_08866614(object, entry[0]) != 0;
            if (entry[1] == 0)
                break;
            entry += 2;
            total += FUN_08866614(object, entry[-1]) != 0;
        }
    }
    if (FUN_08866614(object, 0xcd) != 0)
        total -= FUN_08866614(object, 0xce) != 0;
    return total;
}
