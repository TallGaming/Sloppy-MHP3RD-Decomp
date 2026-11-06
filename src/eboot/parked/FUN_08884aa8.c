/* Purpose: decode a three-channel image into a padded four-channel texture. */
extern int FUN_08884a98(int);
extern void FUN_08823ee4(void *);
extern int FUN_08824ed8(void *, int, unsigned short, unsigned short,
                       int, int, int);
extern unsigned char *FUN_088241c4(void *, int, int);
extern void FUN_08960c70(void);
extern void FUN_08960c50(int);

typedef struct ImageTarget {
    unsigned char unused[0x24];
    unsigned short padded_width;
    unsigned short padded_height;
    unsigned short width;
    unsigned short height;
    void *texture;
} ImageTarget;

typedef int (*DecoderOpen)(void *, int);
typedef int (*DecoderStart)(void *, int);
typedef int (*DecoderReadHeader)(void *);
typedef int (*DecoderFinish)(void *);
typedef int (*DecoderClose)(void *);
typedef int (*DecoderReadRow)(void *, void *, int);
typedef void *(*DecoderAllocateRow)(void *, int, int, int);

#define DECODER_OPEN ((DecoderOpen)0x09c95bf0)
#define DECODER_START ((DecoderStart)0x09c960ec)
#define DECODER_READ_HEADER ((DecoderReadHeader)0x09c96544)
#define DECODER_FINISH ((DecoderFinish)0x09c962b4)
#define DECODER_CLOSE ((DecoderClose)0x09c95d44)
#define DECODER_READ_ROW ((DecoderReadRow)0x09c966d8)

int FUN_08884aa8(int unused, ImageTarget **target_address)
{
    unsigned char decoder[432];
    ImageTarget *target = *target_address;
    unsigned char *pixels;
    unsigned char *row;
    void *row_object;
    DecoderAllocateRow allocate_row;
    int status;
    int x;
    int y;

    (void)unused;
    DECODER_OPEN(decoder, 62);
    DECODER_START(decoder, 1);
    DECODER_READ_HEADER(decoder);

    target->width = *(unsigned int *)(decoder + 0x5c);
    target->height = *(unsigned int *)(decoder + 0x60);
    target->padded_width = FUN_08884a98(target->width);
    target->padded_height = FUN_08884a98(target->height);
    status = *(int *)(decoder + 0x68);
    if (status != 3)
        goto done;

    FUN_08823ee4(target->texture);
    if (FUN_08824ed8(target->texture, 3, target->padded_width,
                     target->padded_height, 1, 1, 0) != 0) {
        status = 1;
        goto done;
    }
    pixels = FUN_088241c4(target->texture, 0, 0);
    if (pixels == 0) {
        status = 1;
        goto done;
    }

    allocate_row = *(DecoderAllocateRow *)(*(unsigned char **)decoder + 8);
    row_object = allocate_row(decoder, 1, target->width * 3, 1);
    for (y = 0; y < target->height; y++) {
        DECODER_READ_ROW(decoder, row_object, 1);
        row = *(unsigned char **)row_object;
        for (x = 0; x < target->padded_width; x++, pixels += 4) {
            if (x < target->width) {
                pixels[0] = row[x * 3 + 0];
                pixels[1] = row[x * 3 + 1];
                pixels[2] = row[x * 3 + 2];
            } else {
                pixels[0] = 0;
                pixels[1] = 0;
                pixels[2] = 0;
            }
            pixels[3] = 0xff;
        }
    }
    status = 3;

done:
    DECODER_FINISH(decoder);
    DECODER_CLOSE(decoder);
    FUN_08960c70();
    FUN_08960c50(status);
    return status;
}
