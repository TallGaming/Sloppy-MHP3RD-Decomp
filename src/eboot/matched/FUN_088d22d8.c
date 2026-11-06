/*
 * Purpose: call a virtual getter and return its float field when present.
 * Hypothesis: the first object word is a vtable pointer.
 */
typedef unsigned int u32;

typedef struct Result {
    u32 unused[2];
    float value;
} Result;

typedef Result *(*Getter)(void *);

float FUN_088d22d8(void *object) {
    Getter getter = ((Getter *)(*(void **)object))[11];
    Result *result = getter(object);

    if (result == 0) {
        return 0.0f;
    }
    return result->value;
}
