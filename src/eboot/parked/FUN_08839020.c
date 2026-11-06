/*
 * FUN_08839020 purpose: consume a fixed packet sequence into the object
 * fields supported by the target call flow and the FUN_0883910c caller.
 */

typedef unsigned char u8;
typedef unsigned short u16;

typedef struct FUN_08839020_Object {
    u8 unknown_00[0x08];
    u8 length_block[0x42];
    u16 reversed_length_4a;
    u8 unknown_4c[0x04];
    u8 record_50[4];
    u8 byte_54;
    u8 byte_55;
    u8 byte_56;
    u8 unknown_57;
    u8 record_58[4];
    u8 trailing_bytes_5c[52];
} FUN_08839020_Object;

extern u8 *FUN_088303e0(void *context, u8 *input);
extern u8 *FUN_088303f0(u8 *destination, u8 *input);
extern u8 *FUN_08830378(void *context, unsigned int requested,
                         const u8 *input);
extern u8 *FUN_088304d0(u8 *destination, u8 *input);
extern u8 *FUN_088304bc(u8 *destination, u8 *input);

u8 *FUN_08839020(FUN_08839020_Object *object, u8 *input)
{
    u16 length;
    int i;

    input = FUN_088303e0(object, input);
    input = FUN_088303f0((u8 *)&length, input);
    object->reversed_length_4a = length;
    input = FUN_08830378(object->length_block, 66, input);
    input = FUN_088304d0(object->record_50, input);
    input = FUN_088304bc(&object->byte_54, input);
    input = FUN_088304bc(&object->byte_56, input);
    input = FUN_088304bc(&object->byte_55, input);
    input = FUN_088304d0(object->record_58, input);
    for (i = 0; i != 52; i++) {
        input = FUN_088304bc(&object->trailing_bytes_5c[i], input);
    }
    return input;
}
