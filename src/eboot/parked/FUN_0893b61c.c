/* FUN_0893b61c: classify an indexed action for a small entity family.
 * Main EBOOT, attempt-high-01 241-512 byte batch 15. Entity roles are hypotheses. */
typedef unsigned char u8;
typedef unsigned short u16;

int FUN_0893b61c(int unused, int *entity, u8 action)
{
    unsigned int index = (unsigned int)(signed char)action;
    int active = ((int (*)(void *))(*(void ***)(entity))[0x134 / 4])(entity);
    u16 type;

    if (active == 0 || (short)entity[0x32f] != 0) {
        return 0;
    }
    type = *(u16 *)(entity + 0x309);
    if (type > 0x8b) {
        if (type == 0x8d) {
            if (index - 6 > 2) {
                return 3;
            }
        } else if (type > 0x8c) {
            if (type != 0x8e) {
                return 0;
            }
            if (action > 0xf) {
                return 1;
            }
            return ((1U << (index & 0x1f)) & 0xcc00) == 0;
        } else if (index != 10 && index != 0xe) {
            return 3;
        }
        return 2;
    }
    if (type > 0x89 || type == 0) {
        return 1;
    }
    return 0;
}
