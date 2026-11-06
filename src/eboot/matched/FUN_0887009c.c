/* Purpose: dispatch one of two global-object handlers from a query result. */
extern unsigned int D_09bb7e90;
extern void *D_08aace80;
extern int FUN_088cca4c(unsigned int value);
extern void FUN_08869e58(void *object);
extern void FUN_08870018(void *object);

void FUN_0887009c(void)
{
    if (FUN_088cca4c(D_09bb7e90) == 2) {
        FUN_08869e58(D_08aace80);
        return;
    }
    FUN_08870018(D_08aace80);
}
