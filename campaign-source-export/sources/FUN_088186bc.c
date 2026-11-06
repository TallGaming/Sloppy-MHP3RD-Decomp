/* Purpose: release a private allocation object returned by FUN_08818944.
 * Hypothesis: the two words at +48 identify a normal allocation; its signed
 * counter at +20 selects decrement, dispose, or FUN_08819014 recovery.
 */
typedef struct PrivateObject {
    void *result;
    int unused4;
    int unused8;
    int unused12;
    void *saved_result;
    int counter;
    int unused24;
    int unused28;
    int unused32;
    int unused36;
    int unused40;
    int unused44;
    int allocation_tag;
    int allocation_tag2;
} PrivateObject;

extern PrivateObject *FUN_08818944(void);
extern int FUN_08819014(void);
extern void FUN_0881d434(void *allocation);

void FUN_088186bc(void) {
    PrivateObject *object = FUN_08818944();
    int counter;

    if (object == 0) {
        return;
    }
    if (object->allocation_tag != 0x432b2b00 ||
        object->allocation_tag2 != 0x474e5543) {
        object->result = 0;
        FUN_0881d434(&object->allocation_tag);
        return;
    }
    counter = object->counter;
    if (counter < 0) {
        counter = counter + 1;
        if (counter != 0) {
            object->counter = counter;
        }
        return;
    }
    counter = counter - 1;
    if (counter == 0) {
        object->result = object->saved_result;
        FUN_0881d434(&object->allocation_tag);
        return;
    }
    if (counter < 0) {
        counter = FUN_08819014() + 1;
        if (counter != 0) {
            object->counter = counter;
        }
        return;
    }
    object->counter = counter;
}
