/* Purpose: probe the savedata path after the expected completion code and report the result. */
extern void FUN_08863538(int, int);
extern int FUN_08960a30(const char *);
extern void FUN_08960a38(int);
extern const char s_ms0____PSP_SAVEDATA_ULJM05800DAT_0896640c[];

void FUN_08863768(int object, int result)
{
    char path[52];
    int handle;
    int index;

    if (result != -0x7ffefffe) {
        FUN_08863538(object, result);
        return;
    }
    for (index = 0; index < 33; index++)
        path[index] = s_ms0____PSP_SAVEDATA_ULJM05800DAT_0896640c[index];
    handle = FUN_08960a30(path);
    if (handle >= 0)
        FUN_08960a38(handle);
    FUN_08863538(object, handle);
}
