/* Dispatch one of the supported audio commands to its game handler. */
typedef unsigned int u32;

extern int D_08a31e80;
extern u32 FUN_08899bc8(int selector, u32 *command, u32 *reply);
extern u32 FUN_08899d88(int selector, u32 *command, u32 *reply);
extern int FUN_0889bd70(int state);
extern int FUN_08866140(void);

u32 FUN_08855040(int unused, int selector, int reserved_a, u32 *command,
                  int reserved_b, u32 *reply)
{
    if (selector == 1)
        return FUN_08899bc8(selector, command, reply);
    if (selector == 100)
        return FUN_08899d88(selector, command, reply);
    if (selector == 777) {
        FUN_0889bd70(D_08a31e80);
        return FUN_08866140();
    }
    return 1;
}

