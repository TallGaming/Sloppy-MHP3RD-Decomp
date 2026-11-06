/*
 * Purpose hypothesis: build a fixed packet field sequence into the shared
 * cursor returned by FUN_0882fc38.  This is an uncompiled field/ABI view, not
 * a whole-function candidate: the two direct callers have no registered C
 * bodies, the source of the copied header bytes is unresolved, and the
 * observed scalar values are backed only by artificial-state probes.
 *
 * Proven target flow: first reserve/copy helpers are called once, then the
 * four-byte cursor helper is called twice and the one-byte helper is called
 * repeatedly.  Both cursor helpers remain PARKED, so their signatures below
 * are retained only to express their independently documented field views.
 */
typedef unsigned int u32;
typedef struct PacketCursor PacketCursor;

PacketCursor *FUN_0882fc38(void);
void FUN_08830270(PacketCursor *cursor, const void *source);
void FUN_088300cc(PacketCursor *cursor, const void *source, unsigned short size);
void FUN_0882ffb4(PacketCursor *cursor, u32 value);
u32 FUN_0882fed4(PacketCursor *cursor, u32 value);

/*
 * Incomplete recovery notes:
 *   cursor = FUN_0882fc38();
 *   FUN_08830270(cursor, unresolved_header_source);
 *   FUN_088300cc(cursor, unresolved_variable_source, unresolved_size);
 *   append two u32 fields, then a fixed sequence of byte fields.
 *
 * The original argument/return ABI and the concrete source object need actual
 * caller context or data bindings before natural C can be attempted.  One
 * synthetic execution of FUN_08837570 reaches this target with three derived
 * nonzero integer lanes; that is path corroboration only, not a prototype.
 */
