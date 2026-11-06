/* Purpose: retain the supported partial ABI and packed-field view; do not compile as a whole candidate. */
typedef unsigned char u8;

typedef struct Source_08839700 {
    u8 opaque_prefix[1];
    /* A tested control field and five adjacent words are read from this object. */
    u8 opaque_tail[19];
} Source_08839700;

/*
 * Partial target flow: an incoming Source_08839700 pointer supplies a five-word
 * packed region. A control-dependent path invokes the verified three-argument
 * byte-fill thunk with a non-null destination, zero value, and nonzero size.
 * The destination owner, control-field type, and complete return ABI are open.
 */
void FUN_08839700(const Source_08839700 *source);
