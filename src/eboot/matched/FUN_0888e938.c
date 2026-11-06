/* Purpose: test three indexed alternatives and report whether any succeeds. */
extern int FUN_0888e914(int, int, int);

int FUN_0888e938(int first, int second)
{
    int index;

    for (index = 0; index != 3; index++) {
        if (FUN_0888e914(first, second, index) != 0)
            return 1;
    }
    return 0;
}
