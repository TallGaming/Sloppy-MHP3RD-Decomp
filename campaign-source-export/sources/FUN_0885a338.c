/*
 * Purpose: apply selected settings to a seven-word audio request body.
 * Each input flag enables one transfer and updates the request mode bits.
 */
typedef struct {
    unsigned short mode;
    unsigned char field_02;
    unsigned char field_03;
    unsigned reserved_04;
    unsigned short field_08;
    unsigned short field_0a;
    unsigned short field_0c;
    unsigned short field_0e;
    unsigned char reserved_10;
    unsigned char field_11;
    unsigned char reserved_12;
    unsigned char field_13;
    unsigned reserved_14;
    unsigned channel;
} AudioBody;

typedef struct {
    unsigned flags;
    unsigned reserved[7];
    unsigned field_20;
    unsigned field_24;
    unsigned field_28;
    unsigned field_2c;
    unsigned field_30;
    unsigned field_34;
    unsigned field_38;
    unsigned field_3c;
} AudioSettings;

void FUN_0885a338(AudioBody *body, const AudioSettings *settings)
{
    if (settings->flags & 0x0100) {
        body->mode |= 0x0200;
        body->field_08 = settings->field_24;
    }
    if (settings->flags & 0x0200) {
        body->mode |= 0x0400;
        body->field_0a = settings->field_28;
    }
    if (settings->flags & 0x0400) {
        body->mode |= 0x0800;
        body->field_0c = settings->field_2c;
    }
    if (settings->flags & 0x2000) {
        body->field_02 = settings->field_38;
        body->mode |= 0x0400;
    }
    if (settings->flags & 0x0800) {
        body->mode |= 0x1000;
        body->field_0e = settings->field_30;
    }
    if (settings->flags & 0x0080) {
        body->field_03 = settings->field_20;
        body->mode |= 0x8000;
    }
    if (settings->flags & 0x1000) {
        body->field_13 = settings->field_34;
        body->mode |= 0x2000;
    }
    if (settings->flags & 0x4000) {
        body->mode |= 0x4000;
        body->field_11 = settings->field_3c;
    }
}

