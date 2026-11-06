/* Purpose: test whether an identifier occupies any of seven selected slots. */
struct SelectedIdentifiers {
    unsigned char unused[0x514e];
    unsigned short slots[7];
};

unsigned int FUN_08866f60(struct SelectedIdentifiers *object, unsigned int identifier)
{
    if (identifier == object->slots[0] || identifier == object->slots[1] ||
        identifier == object->slots[2] || identifier == object->slots[3] ||
        identifier == object->slots[4] || identifier == object->slots[5] ||
        identifier == object->slots[6])
        return 1;
    return 0;
}
