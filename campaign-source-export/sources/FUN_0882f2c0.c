/*
 * Purpose: ABI and local-storage partial for a branchy dispatch helper.
 *
 * This is not a whole-function candidate. Three direct helpers receive
 * derived lanes 0-1 and unchanged incoming lanes 2-3. The first two call
 * results feed conditionals, and this interval has two derived return paths
 * plus an internal jump. Seven contiguous words are stack-local storage.
 * Context fields lack a typed owner, meaning, and lifetime contract.
 */
typedef unsigned int Fun0882f2c0Word;

typedef struct Fun0882f2c0EntryLanes {
    Fun0882f2c0Word derived_or_context_lane0;
    Fun0882f2c0Word derived_or_context_lane1;
    Fun0882f2c0Word forwarded_lane2;
    Fun0882f2c0Word forwarded_lane3;
} Fun0882f2c0EntryLanes;

typedef struct Fun0882f2c0ScratchWords {
    Fun0882f2c0Word word_0;
    Fun0882f2c0Word word_4;
    Fun0882f2c0Word word_8;
    Fun0882f2c0Word word_12;
    Fun0882f2c0Word word_16;
    Fun0882f2c0Word word_20;
    Fun0882f2c0Word word_24;
} Fun0882f2c0ScratchWords;
