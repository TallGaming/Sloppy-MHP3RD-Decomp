/*
 * Purpose: ABI and transient-storage partial for an untyped callback pipeline.
 *
 * This is not a whole-function candidate.  The target has no direct callers
 * in the main image.  Its first direct callee receives all four incoming word
 * lanes, while the later pipeline—including FUN_0882ef70—keeps lane three and
 * derives the other lanes.  The three documented stack words are temporary
 * storage, not fields of an owned object.  No target parameter types, result
 * type, context layout, or ownership contract is proven.
 */
typedef unsigned int Fun0882f178Word;

typedef struct Fun0882f178EntryLanes {
    Fun0882f178Word lane0;
    Fun0882f178Word lane1;
    Fun0882f178Word lane2;
    Fun0882f178Word retained_lane3;
} Fun0882f178EntryLanes;

typedef struct Fun0882f178TransientWords {
    Fun0882f178Word word_304;
    Fun0882f178Word word_308;
    Fun0882f178Word word_312;
} Fun0882f178TransientWords;
