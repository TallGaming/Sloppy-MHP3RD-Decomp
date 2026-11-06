/*
 * FUN_0890db80: initialize a record from one supplied value and store state.
 *
 * Main EBOOT, attempt-high-01 medium batch 5. Record and state roles are hypotheses.
 */

typedef unsigned char u8;
typedef struct {u8 prefix[0x18];int state;u8 payload[1];} Record;
void FUN_0890d564();void FUN_0880e1d4(void *,int);void FUN_0890d57c(void *);
void FUN_0890db80(Record *record,int value,int state)
{FUN_0890d564();FUN_0880e1d4(record->payload,value);FUN_0890d57c(record);record->state=state;}
