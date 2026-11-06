/* Purpose: clear a 128-byte global workspace after successful initialization. */
extern unsigned int D_08a31e88[];
extern int FUN_088583d0(void);

int FUN_08858728(void)
{
    int result = FUN_088583d0();
    if (result >= 0) {
        unsigned int *word = (unsigned int *)((unsigned char *)D_08a31e88 + 0x248);
        unsigned int *end = word + 32;
        do {
            *word++ = 0;
        } while (word != end);
        result = 0;
    }
    return result;
}
