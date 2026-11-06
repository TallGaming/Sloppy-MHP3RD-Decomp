/*
 * FUN_0890da9c: initialize a record with one value and fixed mask 0x1FF, then store state.
 *
 * Main EBOOT, attempt-high-01 medium batch 5. Record and state roles are hypotheses.
 */

typedef unsigned char u8;
typedef struct {u8 prefix[0x18];int state;u8 payload[1];} Record;
void FUN_0890d564();void FUN_0880ea5c(void *,int,int);void FUN_0890d57c(void *);
void FUN_0890da9c(Record *record,int value,int state)
{FUN_0890d564();FUN_0880ea5c(record->payload,value,0x1ff);FUN_0890d57c(record);record->state=state;}
