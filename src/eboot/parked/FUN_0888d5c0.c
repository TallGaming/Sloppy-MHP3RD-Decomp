/* Purpose: create and register the sample service object, then retain its handle. */
extern int FUN_08960b50(const char *, void *, void *);
extern void FUN_08960a08(const char *, unsigned int, void *, int, int, int);
extern void LAB_0888d6d8(void);
extern const char s_MSSample_08966e84[];
extern const char s_fatms0__08966e90[];

void FUN_0888d5c0(unsigned char *object)
{
    int handle[4];

    object[0x1458] = 0;
    handle[0] = FUN_08960b50(s_MSSample_08966e84, LAB_0888d6d8, object);
    *(int *)(object + 0x1454) = handle[0];
    FUN_08960a08(s_fatms0__08966e90, 0x2415821, handle, 4, 0, 0);
}
