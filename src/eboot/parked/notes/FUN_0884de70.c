/*
 * FUN_0884de70: uncompiled field and ABI view for a multi-service dispatcher.
 *
 * Purpose: retain only contracts independently supported by caller/callee
 * evidence. This is not a whole-function candidate: the target makes 21
 * direct calls, and seven game callees remain PARKED without confirmed ABI.
 */

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

typedef struct TypeRecord TypeRecord;
typedef struct SelectorObject SelectorObject;

/* Verified registered-C dependency, retained as an available typed service. */
int FUN_0883d290(void *unused_context,
                 const u8 *membership_record,
                 const TypeRecord *type_record);

/*
 * PARKED dependency: field positions and result role are evidenced, but its
 * source ownership and full callable contract remain incomplete.
 */
const u8 *FUN_0885be6c(void *unused_context, const SelectorObject *object);

/*
 * The sole direct caller establishes an EABI call edge. It does not establish
 * a complete parameter list, object ownership, or return contract for this
 * dispatcher. No executable body is recorded until those contracts exist.
 */
void FUN_0884de70(void);
