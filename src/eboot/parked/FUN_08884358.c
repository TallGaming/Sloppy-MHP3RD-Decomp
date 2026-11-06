/* Purpose: select or smoothly approach a packed material color. */
extern unsigned char D_089cfca8;
extern unsigned char D_089cfca9;
extern unsigned char D_089cfcaa;

static unsigned int read_color(const unsigned char *color)
{
    return (unsigned int)color[0] |
           ((unsigned int)color[1] << 8) |
           ((unsigned int)color[2] << 16) |
           ((unsigned int)color[3] << 24);
}

static void write_color(unsigned char *color, unsigned int value)
{
    color[0] = value;
    color[1] = value >> 8;
    color[2] = value >> 16;
    color[3] = value >> 24;
}

unsigned int FUN_08884358(const unsigned char *material, unsigned char *state,
                          int index, unsigned char clamp)
{
    unsigned int source = read_color(material + 0x20 + index * 0x20);
    unsigned char *slot = state + 0x108 + index * 4;
    unsigned int current = read_color(slot);
    int red = source & 0xff;
    int green = (source >> 8) & 0xff;
    int blue = (source >> 16) & 0xff;

    if (clamp == 1) {
        if (red < D_089cfca8) red = D_089cfca8;
        if (green < D_089cfca9) green = D_089cfca9;
        if (blue < D_089cfcaa) blue = D_089cfcaa;
    }
    if (current == 0) {
        current = (source & 0xff000000) | (blue << 16) | (green << 8) | red;
    } else {
        red = (current & 0xff) + (red - (int)(current & 0xff)) / 10;
        green = ((current >> 8) & 0xff) +
                (green - (int)((current >> 8) & 0xff)) / 10;
        blue = ((current >> 16) & 0xff) +
               (blue - (int)((current >> 16) & 0xff)) / 10;
        current = (current & 0xff000000) | (blue << 16) | (green << 8) | red;
    }
    write_color(slot, current);
    return current;
}
