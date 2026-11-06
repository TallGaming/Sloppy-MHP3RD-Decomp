/*
 * Purpose hypothesis: write an array of fixed-size elements through a stream.
 *
 * This is the non-reentrant historical stdio `fwrite` wrapper: build a
 * one-entry scatter/gather request, submit it to the stream writer, and
 * return the number of complete elements written after a short write.
 */
typedef unsigned int u32;

typedef struct IoVector {
    const void *base;
    u32 length;
} IoVector;

typedef struct IoRequest {
    IoVector *vectors;
    int vector_count;
    u32 remaining;
} IoRequest;

extern int FUN_0880ae50(void *stream, IoRequest *request);

u32 FUN_0880b3f4(const void *buffer, u32 size, u32 count, void *stream)
{
    u32 total = count * size;
    IoVector vector = { buffer, total };
    IoRequest request = { &vector, 1, total };
    if (FUN_0880ae50(stream, &request) == 0)
        return count;
    return (total - request.remaining) / size;
}
